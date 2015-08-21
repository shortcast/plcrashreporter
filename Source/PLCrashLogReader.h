#ifndef PLCRASH_LOG_READER_H
#define PLCRASH_LOG_READER_H

#ifdef __cplusplus
extern "C" {
#endif
    
#import <TargetConditionals.h>
#import <Foundation/Foundation.h>
    
#import "PLCrashAsync.h"
#import "PLCrashAsyncImageList.h"
#import "PLCrashFrameWalker.h"
    
#import "PLCrashAsyncSymbolication.h"
    
#include <uuid/uuid.h>
    
/* Thought process behind this file. The `live_crash.plcrash` file is stored in 
 * bytes as defined in the PLCrashLogWriter.c file, (look at the
 * "plcrash_log_writer_write" method) and in the PLCrashLogWriterEncoding.c file,
 * (look at the "plcrash_writer_pack" method). 
 *
 * Basically, the log_writer is writing out the information from PLCrashReporter
 * in a byte stream. The format of this file is 
 * 
 * <header>
 * <Tag><Size><Data>
 * ...
 * <EOF>
 *
 * where:
 *    <header> - The specified PLCrashReporter tag.
 *    <tag>    - The key related to the information gathered by the
 *               crash_reporter (e.g., system_info, threads, etc.).
 *    <Size>   - The length of the data related to that given section. 
 *    <Data>   - The information pertaining to the specified field.
 *
 * Since PLCrashReporter is encoding the information in this fashion, we should
 * be able to read the informatin off in the same fasion. The header is already
 * removed in the CrashReport.m file when it checks that it is a valid 
 * CrashReport, so we only need to read till the end of file for the each tag.
 *
 * Thus, we should be able to read in the size of the tag, since the tag is just
 * a uint32_t with a specific size. Similarly, all tags use the "tag_pack"
 * function, which returns a value of a specific size. We can implement a 
 * "tag_unpack" function that will return the integer value of the field_id.
 * From this field_id value, we can use a switch statement to get the specific
 * section.
 *
 * The tricky part is going to be returning the integer value that represents
 * how many bytes of the data we should read for each section.
 *
 * Judging off of what is happening in the plcrash_writer_pack function, it looks
 * like rv is the offset within the scratch array, which is used to store the
 * value, so it can be written to file.
 *
 * The PLCrashLogWriter appears to determine size based on uint32_t integers, so
 * we could possible get the size of the data by reverse engineering that number
 * as well. 
 * 
 * From there, we should be able to retrieve the data from the file accordingly
 * and deobfuscate it.
 *
 * I've included the functions that need to be reverse-engineered in the
 * PLCrashLogReaderDecoding.c file.
 */
typedef struct plcrash_log_reader {
} plcrash_log_reader_t;

plcrash_error_t plcrash_log_reader_init();
    
plcrash_error_t plcrash_log_reader_read();
    
plcrash_error_t plcrash_log_reader_close();
    
#ifdef __cplusplus
}
#endif

#endif

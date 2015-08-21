#ifndef PLCRASH_LOG_READER_DECODER_H
#define PLCRASH_LOG_READER_DECODER_H

#ifdef __cplusplus
extern "C" {
#endif
    
#import "PLCrashLogWriterEncoding.h"

size_t plcrash_report_unpack(plcrash_async_file_t file);
    
#ifdef __cplusplus
}
#endif

#endif /* PLCRASH_LOG_READER_DECODER_H */

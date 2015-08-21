#import <stdlib.h>
#import <fcntl.h>
#import <errno.h>
#import <string.h>
#import <stdbool.h>
#import <dlfcn.h>

#import <sys/sysctl.h>
#import <sys/time.h>

#import "PLCrashLogReader.h"
#import "PLCrashLogReaderDecoding.h"

plcrash_error_t plcrash_log_reader_init() {
    return PLCRASH_ESUCCESS;
}

plcrash_error_t plcrash_log_reader_read() {
    return PLCRASH_ESUCCESS;
}

plcrash_error_t plcrash_log_reader_close() {
    return PLCRASH_ESUCCESS;
}

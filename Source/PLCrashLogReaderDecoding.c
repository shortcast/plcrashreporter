#import <stdint.h>
#import <string.h>
#import <stdlib.h>

#include "PLCrashLogReaderDecoding.h"

#define MAX_UNIT64_ENCODED_SIZE 10

// Reverse engineering PLCrashLogWriterEncoding.c file.
static inline uint32_t unzigzag32(int32_t v) {
    return 0;
}

static inline uint64_t unzigzag64(int64_t v) {
    return 0;
}

static inline size_t uint32_unpack(uint64_t value, uint8_t *out) {
    return 0;
}

static inline size_t int32_unpack(int32_t value, uint8_t *out) {
    return 0;
}

static inline size_t sint32_unpack(int32_t value, uint8_t *out) {
    return 0;
}

static inline size_t uint64_pack(uint64_t value, uint8_t *out) {
    return 0;
}

static inline size_t sint64_unpack(int64_t value, uint8_t *out) {
    return 0;
}

static inline size_t fixed32_unpack(uint32_t value, uint8_t *out) {
    return 0;
}

static inline size_t fixed64_unpack(uint8_t *out) {
    return 0;
}

static size_t boolean_unpack(uint8_t *out) {
    return 1;
}

static size_t tag_unpack(uint32_t id, uint8_t *out) {
    return 0;
}

size_t plcrash_reader_unpack(plcrash_async_file_t *file) {
    return 0;
}

#ifndef _LOG_H_
#define _LOG_H_ 1

#include <result.h>

#include <stdio.h>
#include <stddef.h>

// It akszually exists VSC...

#ifndef __FILE_NAME__
#define __FILE_NAME__ ""
#endif

Result log1(FILE* file, const char* filename, const char* function_name, size_t line, const char* formatter, ...);

#define LOG(file, string, ...) \
    log1(file, __FILE_NAME__,  __PRETTY_FUNCTION__, __LINE__, string,##__VA_ARGS__)

#define LOG_STDOUT(string, ...) \
    LOG(stdout, string,##__VA_ARGS__)

#define LOG_STDERR(string, ...) \
    LOG(stdout, string,##__VA_ARGS__)

#endif
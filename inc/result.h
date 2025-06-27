#ifndef _RESULT_H_ 
#define _RESULT_H_ 1

#include <stddef.h>

typedef enum {
    RESULT_MALLOC_ERROR = -2,
    RESULT_INVALID_ARGS = -1, 
    RESULT_SUCCESS = 0,
    RESULT_TRUE = 1,
} Result;

char* get_result_cstr(Result result);

// It akszually exists VSC...

#ifndef __FILE_NAME__
#define __FILE_NAME__ ""
#endif

void result_check1(const char* filename, const char* function_name, size_t line, Result result);

#define RESULT_CHECK(result) \
    result_check1(__FILE_NAME__,  __PRETTY_FUNCTION__, __LINE__, result)

#endif
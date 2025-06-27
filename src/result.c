#include <result.h>

#include <stdio.h>
#include <stdlib.h>

char* get_result_cstr(Result result) {
    switch (result) {
    case RESULT_MALLOC_ERROR:
        return "Malloc Error";
    case RESULT_INVALID_ARGS:
        return "Invalid Args";
    case RESULT_SUCCESS:
        return "Success";
    case RESULT_TRUE:
        return "True";    
    default:
        return "UNKNOWN";
    }
}

void result_check1(const char* filename, const char* function_name, size_t line, Result result) {
    if(result >= RESULT_SUCCESS) return;
    
    // Now we know that Result stores error
    fprintf(stderr, "[%s:%s (line %d)] Error: %s\n", filename, function_name, line, get_result_cstr(result));
    exit(1);
}
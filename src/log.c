#include <result.h>

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

Result log1(FILE* file, const char* filename, const char* function_name, size_t line, const char* formatter, ...) {
    va_list args;
    va_start(args, formatter);
    size_t size = vsnprintf(NULL, 0, formatter, args);
    va_end(args);

    va_start(args, formatter);
    char* string = malloc(size + 1);
    
    if(!string) return RESULT_MALLOC_ERROR;
    vsnprintf(string, size + 1, formatter, args);    
    va_end(args);
    
    fprintf(stderr, "[%s:%s (line %d)] %s\n", filename, function_name, line, string);
    free(string);
    
    return RESULT_SUCCESS;
}
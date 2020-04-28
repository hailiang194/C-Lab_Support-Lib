#ifndef STRINGIO_H
    #define STRINGIO_H

#include "../clean-buffer.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#ifndef __cplusplus //bool has been built in C++ so just C need this header 
    #include <stdbool.h>
#endif

/**
 * Input to string s
 * If user input string has length greater or equal to MAX_LENGTH, 
 * it will discards all character after (MAX_LENGTH - 1)th character and return false
 * s: string you want to input
 * MAX_LENGTH: maximum length for s
 * prompt: message what you want user input for
 * return true if s is not empty after trim, otherwise false
 */
bool inputString(char *s, const size_t MAX_LENGTH, const char *prompt);

/**
 * Input to sstring s and then trim it
 * If user input string has length greater or equal to MAX_LENGTH, 
 * it will discards all character after (MAX_LENGTH - 1)th character and return false
 * s: string you want to input
 * MAX_LENGTH: maximum length for s
 * prompt: message what you want user input for
 * return true if s is not empty after trim, otherwise false
 */
bool inputStringAndTrim(char *s, const size_t MAX_LENGTH, const char *prompt);

#endif
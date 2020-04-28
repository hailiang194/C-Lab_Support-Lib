#ifndef INTEGERIO_H
    #define INTEGERIO_H

#include "../clean-buffer.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#ifndef __cplusplus //bool has been built in C++ so just C need this header
    #include <stdbool.h>
#endif

/**
 * Input n after Return has been pressed
 * n: pointer of integer you want to input
 * prompt: prompt user message
 * MIN: the mininum value that n can be
 * MAX: the maxinum value that n can be
 * return true if integer has been input after Return value, otherwise false
 */
bool inputIntegerWithRange(int *n, const char* prompt, const int MIN, const int MAX);

/**
 * Input n after Return has been pressed
 * n: pointer of long long integer you want to input
 * prompt: prompt user message
 * MIN: the mininum value that n can be
 * MAX: the maxinum value that n can be
 * return true if integer has been input after Return value, otherwise false
 */
bool inputLongIntegerWithRange(long long int *n, const char *prompt, const long long int MIN, const long long int MAX);

/**
 * Input n after Return has been pressed
 * n: pointer of usigned integer you want to input
 * prompt: prompt user message
 * MIN: the mininum value that n can be
 * MAX: the maxinum value that n can be
 * return true if integer has been input after Return value, otherwise false
 */
bool inputUnsignedIntegerWithRange(unsigned int *n, const char *prompt, const unsigned int MIN, const unsigned int MAX);

/**
 * Input n after Return has been pressed
 * n: pointer of unsigned long long integer you want to input
 * prompt: prompt user message
 * MIN: the mininum value that n can be
 * MAX: the maxinum value that n can be
 * return true if integer has been input after Return value, otherwise false
 */
bool inputUnsignedLongIntegerWithRange(unsigned long long int *n, const char *prompt, const unsigned long long int MIN, const unsigned long long MAX);

/**
 * Input n from INT_MIN to INT_MAX
 * n: pointer of integer you want to input
 * prompt: prompt user message
 * return true if integer has been input after Return value, otherwise false
 */
bool inputInteger(int *n, const char *prompt);

/**
 * Input n from LLONG_MIN to LLONG_MAX
 * n: pointer of long long int you want to input
 * prompt: prompt user message
 * return true if integer has been input after Return value, otherwise false
 */
bool inputLongInteger(long long int *n, const char *prompt);

/**
 * Input n from 0 to UINT_MAX
 * n: pointer of unsigned integer you want to input
 * prompt: prompt user message
 * return true if integer has been input after Return value, otherwise false
 */
bool inputUnsignedInteger(unsigned int *n, const char *prompt);

/**
 * Input n from 0 to ULLONG_MAX
 * n: pointer of long long integer you want to input
 * prompt: prompt user message
 * return true if integer has been input after Return value, otherwise false
 */
bool inputUnsignedLongInteger(unsigned long long int *n, const char *prompt);

#endif
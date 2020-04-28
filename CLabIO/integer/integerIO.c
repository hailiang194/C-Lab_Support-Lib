#include "integerIO.h"

bool inputIntegerWithRange(int *n, const char* prompt, const int MIN, const int MAX)
{
    CLEAN_BUFFER;
	char temp;
	printf("%s", prompt);


	if(scanf("%d%c", n, &temp) == 2)
	{
		if((temp == '\n') && ((*n >= MIN) && (*n <= MAX)))
			return true;
	}


	return false;
}

bool inputLongIntegerWithRange(long long int *n, const char *prompt, const long long MIN, const long long MAX)
{
    CLEAN_BUFFER;
	char temp;
	printf("%s", prompt);


	if(scanf("%lli%c", n, &temp) == 2)
	{
		if((temp == '\n') && ((*n >= MIN) && (*n <= MAX)))
			return true;
	}


	return false;
}

bool inputUnsignedIntegerWithRange(unsigned int *n, const char *prompt, const unsigned int MIN, const unsigned int MAX)
{
    CLEAN_BUFFER;
	char temp;
	printf("%s", prompt);


	if(scanf("%u%c", n, &temp) == 2)
	{
		if((temp == '\n') && ((*n >= MIN) && (*n <= MAX)))
			return true;
	}


	return false;
}

bool inputUnsignedLongIntegerWithRange(unsigned long long int *n, const char *prompt, const unsigned long long int MIN, const unsigned long long MAX)
{
    CLEAN_BUFFER;
	char temp;
	printf("%s", prompt);


	if(scanf("%llu%c", n, &temp) == 2)
	{
		if((temp == '\n') && ((*n >= MIN) && (*n <= MAX)))
			return true;
	}


	return false;
}

bool inputInteger(int *n, const char *prompt)
{
    return inputIntegerWithRange(n, prompt, INT_MIN, INT_MAX);
}

bool inputLongInteger(long long int *n, const char *prompt)
{
    return inputLongIntegerWithRange(n, prompt, LLONG_MIN, LLONG_MAX);
}

bool inputUnsignedInteger(unsigned int *n, const char *prompt)
{
    return inputUnsignedIntegerWithRange(n, prompt, 0, UINT_MAX);
}

bool inputUnsignedLongInteger(unsigned long long int *n, const char *prompt)
{
    return inputUnsignedLongIntegerWithRange(n, prompt, 0, ULLONG_MAX);
}
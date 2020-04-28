#ifndef CLEAN_BUFFER_H
    #define CLEAN_BUFFER_H

#include <stdio.h>

#ifdef _WIN32 /*If this is on Windows*/
    #define CLEAN_BUFFER fflush(stdin);
#elif defined (__CYGWIN__) || defined (__FreeBSD__) /*If this is on Cygwin or FreeBSD*/
    #define CLEAN_BUFFER fpurge(stdin);  
#elif defined ( __linux__) /*If this in on Linux*/
    #include <stdio_ext.h>
    #define CLEAN_BUFFER __fpurge(stdin);
#endif 

#endif
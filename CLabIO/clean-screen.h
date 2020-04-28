#ifndef CLEAN_SCREEN_H
    #define CLEAN_SCREEN_H

#ifdef _WIN32 /*This for Windows*/
    #include <stdlib.h>
    #define CLEAN_SCREEN system("cls")
#else /*This for other OS*/
    #include <stdio.h>
    #define CLEAN_SCREEN printf("\e[1;1H\e[2J")
#endif

#endif
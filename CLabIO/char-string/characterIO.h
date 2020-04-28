#ifndef CHARACTER_H
    #define CHARACTER_H

#include "../clean-buffer.h"
#include <stdio.h>
#include <stdlib.h>
#ifndef __cplusplus //bool has been built in C++ so just C need this header
    #include <stdbool.h>
#endif

#if defined (__CYGWIN__) || defined (__FreeBSD__) || defined ( __linux__)
    #include <termios.h>

    /*getch only built-in in Windows. Thanks my instructor help me to have this function */
    
    /**
     * get a character for keyboard without waiting for Return key pressed
     * return the character user input from keyboard
     */
    int getch();
#endif

/**
 * print prompt and let user inputcharacter c 
 * c: Character store the user input
 * prompt: message for input
 * return true if input character succesfully, otherwise false
 */
bool inputCharacter(char *c, const char *prompt);

#endif
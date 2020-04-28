#include "stringIO.h"

bool inputString(char *s, const size_t MAX_LENGTH, const char *prompt)
{
    CLEAN_BUFFER;
    printf("%s", prompt);

    fgets(s, MAX_LENGTH - 1, stdin);

    if(s[strlen(s) - 1] != '\n')
        return false;

    s[strlen(s) - 1] = '\0';

    return true;
}

bool inputStringAndTrim(char *s, const size_t MAX_LENGTH,const char *prompt)
{
    CLEAN_BUFFER;
    printf("%s", prompt);

    //remove space at the leadding of string
    char temp = ' ';
    do
    {
        temp = getchar();
        if(temp == '\n')
        {
            strcpy(s, "");
            return false;
        }
    } while (isspace(temp));
    s[0] = temp;


    fgets(&s[1], MAX_LENGTH - 1, stdin);

    if(s[strlen(s) - 1] != '\n')
        return false;

    s[strlen(s) - 1] = '\0';
    //remove trailing space
    for(int i = strlen(s) - 1; i >= 0; i--)
    {
        if(isspace(s[i]))
            s[i] = '\0';
        else
            break;
        
    }

    return true;
}
#include "characterIO.h"

int getch()
{
    int                 ret;
    struct termios      back;
    struct termios      tmp;
    int fd =            0;      //stdin

    tcgetattr(fd, &back);       // a backup
    tcgetattr(fd, &tmp);

    // code get from man page
    tmp.c_iflag &= ~(IGNBRK | BRKINT | PARMRK | ISTRIP
                   | INLCR | IGNCR | ICRNL | IXON);
    tmp.c_oflag &= ~OPOST;
    tmp.c_lflag &= ~(ECHO | ECHONL | ICANON | ISIG | IEXTEN);

    tmp.c_cflag &= ~(CSIZE | PARENB);
    tmp.c_cflag |= CS8;
    // endof man page

    // apply configuration
    tcsetattr(fd, TCSANOW, &tmp);

    ret=getchar();

    // reset back the configuration
    tcsetattr(fd, TCSANOW, &back);

    return ret;    
}

bool inputCharacter(char *c, const char *prompt)
{
    CLEAN_BUFFER;
    printf("%s", prompt);
    (*c) = getchar();
}
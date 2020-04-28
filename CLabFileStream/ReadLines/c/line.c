#include "line.h"

line_t initLine(const char *content)
{
    line_t line;
    strncpy(line.content, content, MAX_LENGTH_LINE);

    return line;
}

void freeLine(line_t *line)
{
    free(line -> content);
    free(line);
}
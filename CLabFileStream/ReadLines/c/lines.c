#include "lines.h"

lines_t initLines()
{
    lines_t lines;
    lines.lines = NULL;
    lines.numLines = 0;

    return lines;
}

bool readlines(lines_t *lines, const char *filename)
{
    FILE *file = fopen(filename, "r");
    if(file == NULL)
    {
        return false;
    }

    char lineBuffer[MAX_LENGTH_LINE] = "";

    while(fgets(lineBuffer, MAX_LENGTH_LINE, file) != NULL)
    {
        //remove new line character after reading a line
        char *lastCharBuffer = &lineBuffer[strlen(lineBuffer) - 1];
        if(*lastCharBuffer == '\n')
        {
            *lastCharBuffer = '\0';
        }

        line_t line = initLine(lineBuffer);
        lines ->lines = (line_t *)realloc(lines -> lines, ((lines -> numLines) + 1) * sizeof(line_t));
        (lines -> lines)[lines -> numLines] = line;
        (lines -> numLines)++;
    }

    fclose(file);
}

void freeLines(lines_t *lines)
{
    free(lines);
}
#ifndef LINE_H
    #define LINE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH_LINE 512

/**
 * struct store content of a line
 * content: content of the line
 */
typedef struct Line
{
    char content[MAX_LENGTH_LINE];
}line_t;

/**
 * initialise new line_t, you can't store content of line more than MAX_LENGTH_LINE(for overflow safe)
 * content: content of new line_t
 * return new line you create
 */
line_t initLine(const char *content);

/**
 * free line_t
 * line: line_t you want to free it
 */
void freeLine(line_t *line);

#endif
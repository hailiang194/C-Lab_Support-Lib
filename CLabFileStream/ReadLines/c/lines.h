#ifndef LINES_H
    #define LINES_H

#include "line.h"
#include <stdlib.h>
#include <stdbool.h>

/**
 * struct store all lines in file
 * lines: dynamic pointer store all lines in file
 * numLines: store quantity of lines in file, please don't assign this variable if it is not nessary
 */
typedef struct Lines
{
    line_t *lines;
    size_t numLines;
}lines_t;

/**
 * Initialise new line_t
 */
lines_t initLines();

/**
 * read file and store it line by line, suppose that maximum length of each line is MAX_LENGTH_LINE
 * lines: store content of each line in file
 * filename: file name of file you want to read
 * return true if file is exist, otherwise false
 */
bool readlines(lines_t *lines, const char *filename);

/**
 * free lines_t lines
 * lines_t: lines_t you want to free
 */
void freeLines(lines_t *lines);

#endif
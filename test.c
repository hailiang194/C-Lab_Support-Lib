#include <stdio.h>
#include <stdlib.h>

#include "CLab.h"

int main(int argc, char const *argv[])
{
    lines_t lines = initLines();

    readlines(&lines, "test.txt");

    for(int i = 0; i < lines.numLines; i++)
        printf("%s\n", lines.lines[i].content);

    line_t *line = lines.lines;
    size_t size = lines.numLines;

    freeLines(&lines);
    return 0;
}

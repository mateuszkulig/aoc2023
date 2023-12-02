#include "read_input.h"

inputLine readLine(FILE *filePointer) {
    char            *lineBuffer = malloc(sizeof(char) * 512);
    char            currentChar = '\0';
    int             linePosition = 0;
    inputLine       result;

    for (currentChar = getc(filePointer); (currentChar != EOF) && (currentChar != '\n'); currentChar = getc(filePointer))
    {
        lineBuffer[linePosition] = currentChar;
        linePosition++;
    }

    lineBuffer[linePosition] = '\0';
    result.length = linePosition;
    result.line = lineBuffer;

    return result;
}

void freeLine(inputLine *line) {
    free(line->line);
}


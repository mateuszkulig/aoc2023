#pragma once
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"

/**
 * @brief                   Struct containing contents of line and its length
 * 
 */
typedef struct {
    uint8_t     length;
    char        *line;
} inputLine;


/**
 * @brief                   Return the line along with its length read from current position of file pointer
 * 
 * @param filePointer       Pointer from fopen() call
 * @return inputLine        Struct filled with read line
 */
inputLine readLine(FILE *filePointer);


/**
 * @brief                   Release memory from previously allocated line
 * 
 */
void freeLine(inputLine *line);

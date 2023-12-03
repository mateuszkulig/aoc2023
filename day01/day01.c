#include "stdio.h"
#include "read_input.h"

/**
 * @brief           Entry point of the program
 * 
 * @param argc      Number of command line arguments
 * @param argv      Command lines arguments
 * @return int      Returned status code
 */
int main(int argc, char **argv) {
    inputLine line = {0};
    FILE *fp = NULL;

    fp = fopen("input01.txt", "r");
    line = readLine(fp);
    printf("%s", line.line);
    fclose(fp);
    
    return 0;
}
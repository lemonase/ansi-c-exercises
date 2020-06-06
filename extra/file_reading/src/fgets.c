#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    // create file pointer
    FILE *fp;

    // filename as first argument
    if (argv[1] != NULL){
        fp = fopen(argv[1], "r");
    } else {
        printf("%s\n", "Please enter a filename");
        return 1;
    }
    if (fp == NULL)
        exit(EXIT_FAILURE);

    // declare line variables
    const size_t line_max = 300;
    char* line_buffer = malloc(line_max);

    // fgets reads a file pointer, stops at a newline and fills the line_buffer until line_max
    // the loop continues until there is a line that is empty or NULL
    while(fgets(line_buffer, line_max, fp) != NULL) {
        printf("%s", line_buffer);
    }

    // free memory
    free(line_buffer);
	fclose(fp);
	exit(EXIT_SUCCESS);
}

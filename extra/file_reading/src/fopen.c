#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    // get a file pointer
    FILE *fp;

    // open file with first argument as filename
    if (argv[1] != NULL){
        fp = fopen(argv[1], "r");
    } else {
        printf("%s\n", "Please enter a filename");
        return 1;
    }

    // get file size by seeking to the end
    // getting position of the file pointer
    // and going back to the beginning
    fseek(fp, 0, SEEK_END);
    long fsize = ftell(fp);
    fseek(fp, 0, SEEK_SET);

    // allocte buffer to fit the whole file
    char *buffer = malloc(fsize + 1);

    // read into buffer
    fread(buffer, 1, fsize, fp);

    // print out the buffer
    printf("%s\n", buffer);

    // close file
    fclose(fp);
}

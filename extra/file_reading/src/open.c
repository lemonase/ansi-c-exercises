#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>

int main(int argc, char **argv) {
    // declare var to hold a file descriptor
    int fd;

    // open the first arg as read-only
    if (argv[1] != NULL) {
        fd = open(argv[1], O_RDONLY);
    } else {
        printf("%s\n", "Please supply a filename");
        return 1;
    }

    // create buffer, and sizes
    char buf[256];
    size_t nbytes = sizeof(buf);
    ssize_t bytes_read;

    // read into buffer
    bytes_read = read(fd, buf, nbytes);

    // print it out
    printf("%s", buf);
    printf("File Descriptor: %d", fd);
    printf("\nBytes Read: %zu\n", bytes_read);
}

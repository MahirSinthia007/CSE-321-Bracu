#include <unistd.h>
#include <fcntl.h>

int main(void) {
    int fd1, fd2;
    ssize_t n;
    char buffer[50];

    // Read from input.txt
    fd1 = open("input.txt", O_RDONLY);
    printf("File descriptor for input.txt is %d",fd1);
    n = read(fd1, buffer, 50);

    // Display the file content on the terminal
    write(1, buffer, n);

    // Copy the content to output.txt
    fd2 = open("output.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
    write(fd2, buffer, n);

    close(fd1);
    close(fd2);

    // Read keyboard input and append it to output.txt
    n = read(0, buffer, 20);
    fd2 = open("output.txt", O_WRONLY | O_APPEND);
    write(fd2, buffer, n);

    close(fd2);
    return 0;
}

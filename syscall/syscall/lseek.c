#include <unistd.h>
#include <fcntl.h>

int main(void) {
    int fd;
    char buffer[20];
    ssize_t n;

    fd = open("seeking.txt", O_RDONLY);

    // SEEK_SET: move 4 bytes from the beginning
    lseek(fd, 4, SEEK_SET);
    n = read(fd, buffer, 5);
    write(1, buffer, n);          // Hello
    write(1, "\n", 1);

    // Current position is 9; skip "1234" to reach position 13
    lseek(fd, 4, SEEK_CUR);
    n = read(fd, buffer, 5);
    write(1, buffer, n);          // World
    write(1, "\n", 1);

    // SEEK_END: move 5 bytes backward from the end
    lseek(fd, -6, SEEK_END);
    n = read(fd, buffer, 5);
    write(1, buffer, n);          // World
    write(1, "\n", 1);

    close(fd);
    return 0;
}

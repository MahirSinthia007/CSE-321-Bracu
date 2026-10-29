#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Number of arguments: %d\n", argc);

    printf("Program name: %s\n", argv[0]);
    printf("First argument: %s\n", argv[1]);
    printf("Second argument: %s\n", argv[2]);

    return 0;
}

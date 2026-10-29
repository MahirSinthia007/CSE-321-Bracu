#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Child: Running a new program\n");
        execlp("ls","ls","-l",NULL);
        printf("Hello World");
    } else {
        printf("Hello from Parent\n");
    }

    return 0;
}

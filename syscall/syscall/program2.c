#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork failed");
        return 1;
    }

    if (pid == 0) {
        execl("./program1", "program1", "a", "b", (char *)NULL);

        // Runs only if exec fails
        perror("exec failed");
        return 1;
    } else {
        wait(NULL);
        printf("Parent: child finished\n");
    }

    return 0;
}

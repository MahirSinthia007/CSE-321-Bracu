#include <stdio.h>
#include <unistd.h>

int main(void) {
    pid_t pid = fork();

    if (pid < 0)
        return 1;

    if (pid == 0) {
        printf("Child: parent PID = %d\n", (int)getppid());
        sleep(3);
        printf("Orphan: new parent PID = %d\n", (int)getppid());
    } else {
        sleep(1);
        printf("Parent exits\n");
    }

    return 0;
}


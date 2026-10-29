#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    pid_t pid = fork();

    if (pid < 0)
        return 1;

    if (pid == 0) {
        printf("Child exits. PID = %d\n", (int)getpid());
    } else {
        printf("Parent: child PID = %d\n", (int)pid);
        sleep(20);   // Exited child stays a zombie during this time
        wait(NULL);  // Collect the child's status and remove the zombie
    }

    return 0;
}


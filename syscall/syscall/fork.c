#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    int x = 1;
    pid_t pid = fork();

    if (pid < 0) {
        perror("fork failed");
        return 1;
    }

	if (pid == 0) {
	    printf("Child PID = %d\n", (int)getpid());
	    printf("Parent PID = %d\n", (int)getppid());
	    printf("Child x = %d\n", ++x);
	} else {
	    wait(NULL);
	    printf("Parent PID = %d, x = %d\n", (int)getpid(), --x);
	}

    return 0;
}

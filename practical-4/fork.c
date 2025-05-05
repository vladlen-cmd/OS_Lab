#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        printf("I am the Child process. My PID is %d, my Parent's PID is %d\n", getpid(), getppid());
    } else {
        printf("I am the Parent process. My PID is %d, I created a Child with PID %d\n", getpid(), pid);
    }

    return 0;
}

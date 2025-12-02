#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        // Child process
        printf("Child running...\n");
        sleep(2);
        printf("Child exiting...\n");
        exit(10);  // exit status = 10
    } 
    else {
        // Parent process
        int status;
        pid_t p = wait(&status);

        printf("Parent: Child %d terminated\n", p);

        if (WIFEXITED(status)) {
            printf("Child exited normally with status = %d\n", WEXITSTATUS(status));
        }
    }

    return 0;
}

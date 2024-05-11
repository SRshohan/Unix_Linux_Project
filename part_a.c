#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_LINE 80 /* Maximum length command */

int main(void) {
    char *args[MAX_LINE/2 + 1]; /* command line arguments */
    int should_run = 1; /* flag to determine when to exit program */

    while (should_run) {
        printf("ubos> ");
        fflush(stdout);

        // Read input
        char input[MAX_LINE];
        if (fgets(input, MAX_LINE, stdin) == NULL) {
            continue; // Handle read errors or EOF
        }

        // Check for exit command
        if (strncmp(input, "exit", 4) == 0) {
            should_run = 0;
            continue;
        }

        // Parse the input
        int i = 0;
        char *token = strtok(input, " \n");
        while (token != NULL) {
            args[i++] = token;
            token = strtok(NULL, " \n");
        }
        args[i] = NULL;

        // Fork a child process
        pid_t pid = fork();

        if (pid == 0) {
            // Child process
            execvp(args[0], args);
            perror("execvp"); // execvp returns only if there is an error
            exit(EXIT_FAILURE);
        } else if (pid > 0) {
            // Parent process
            wait(NULL); // Wait for the child to complete
        } else {
            perror("fork");
        }
    }

    return 0;
}

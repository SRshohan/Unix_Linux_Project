#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#define MAX_PATH 1024

void list_executables() {
    DIR *dp;
    struct dirent *dirp;
    struct stat statbuf;
    char *files[256];
    int exec_count = 0;

    dp = opendir(".");
    if (dp == NULL) {
        perror("Failed to open directory");
        return;
    }

    while ((dirp = readdir(dp)) != NULL) {
        stat(dirp->d_name, &statbuf);
        if (statbuf.st_mode & S_IXUSR) {
            files[exec_count] = strdup(dirp->d_name);
            printf("%d %s\n", exec_count + 1, files[exec_count]);
            exec_count++;
        }
    }
    closedir(dp);

    // User selects a program to execute
    int selection;
    printf("Enter the number of the program to execute: ");
    scanf("%d", &selection);
    selection--; // Adjust for zero-indexed array

    if (selection < 0 || selection >= exec_count) {
        printf("Invalid selection.\n");
    } else {
        execl(files[selection], files[selection], (char *)NULL);
    }

    // Free allocated memory
    for (int i = 0; i < exec_count; i++) {
        free(files[i]);
    }
}

int main() {
    list_executables();
    return 0;
}

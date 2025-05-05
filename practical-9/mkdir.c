#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

int main() {
    char dir_name[100];
    printf("Enter directory name to create: ");
    scanf("%s", dir_name);

    if (mkdir(dir_name, 0777) == -1) {
        perror("mkdir");
        return 1;
    }
    printf("Directory '%s' created successfully.\n", dir_name);
    return 0;
}

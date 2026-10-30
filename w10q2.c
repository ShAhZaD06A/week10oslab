#include <stdio.h>
 int main() {
    FILE *fp;
    int pid, bt;
    fp = fopen("process.txt", "r");
    if (fp == NULL) {
        printf("Error opening file or file not found.\n");
        return 1;

    }
    printf("PID\tBurst time\n");
    while(fscanf(fp, "%d %d", &pid, &bt) == 2) {
        printf("%d\t%d\n", pid, bt);
    }
    fclose(fp);
    return 0;
 }
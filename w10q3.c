#include <stdio.h>
int main() {
    FILE *fp;
    int pid, bt;
    int count = 0;
    fp = fopen("process.txt", "r");
    if (fp == NULL) {
        printf("Error opening file or file not found.\n");
        return 1;
    }
    while (fscanf(fp, "%d %d", &pid, &bt) == 2) {
        count++;
    }
    printf("Total processes: %d\n", count);
    fclose(fp);
    return 0;
}
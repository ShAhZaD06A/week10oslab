
#include <stdio.h>

int main()
{
    FILE *fp;
    int n, pid, bt, i;

    fp = fopen("process.txt", "w");

    if (fp == NULL)
    {
        printf("File cannot be opened");
        return 1;
    }

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter PID and Burst Time: ");
        scanf("%d %d", &pid, &bt);

        fprintf(fp, "%d %d\n", pid, bt);
    }

    fclose(fp);

    printf("Process information saved successfully.");

    return 0;
}

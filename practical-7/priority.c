#include <stdio.h>

int main() {
    int n, i, j;
    int burst_time[20], waiting_time[20], turnaround_time[20], priority[20], process[20];
    int total_waiting = 0, total_turnaround = 0, temp;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    printf("Enter the burst time and priority for each process:\n");
    for (i = 0; i < n; i++) {
        printf("Process %d:\n", i + 1);
        printf("Burst Time: ");
        scanf("%d", &burst_time[i]);
        printf("Priority: ");
        scanf("%d", &priority[i]);
        process[i] = i + 1;  // Process ID
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (priority[j] > priority[j + 1]) {
                // Swap burst time
                temp = burst_time[j];
                burst_time[j] = burst_time[j + 1];
                burst_time[j + 1] = temp;

                // Swap priority
                temp = priority[j];
                priority[j] = priority[j + 1];
                priority[j + 1] = temp;

                // Swap process IDs
                temp = process[j];
                process[j] = process[j + 1];
                process[j + 1] = temp;
            }
        }
    }

    waiting_time[0] = 0;

    for (i = 1; i < n; i++) {
        waiting_time[i] = waiting_time[i - 1] + burst_time[i - 1];
    }

    for (i = 0; i < n; i++) {
        turnaround_time[i] = waiting_time[i] + burst_time[i];
        total_waiting += waiting_time[i];
        total_turnaround += turnaround_time[i];
    }

    printf("\nProcess\tBurst Time\tPriority\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("P%d\t%d\t\t%d\t\t%d\t\t%d\n", process[i], burst_time[i], priority[i], waiting_time[i], turnaround_time[i]);
    }

    printf("\nAverage Waiting Time: %.2f", (float)total_waiting / n);
    printf("\nAverage Turnaround Time: %.2f\n", (float)total_turnaround / n);

    return 0;
}

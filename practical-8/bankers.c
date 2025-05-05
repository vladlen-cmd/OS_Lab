#include <stdio.h>

#define MAX 10
#define RESOURCE_TYPES 3

int available[RESOURCE_TYPES];
int maximum[MAX][RESOURCE_TYPES];
int allocation[MAX][RESOURCE_TYPES];
int need[MAX][RESOURCE_TYPES];

int isSafeState(int n, int m) {
    int finish[MAX] = {0};
    int safeSequence[MAX];
    int work[RESOURCE_TYPES];
    int count = 0;


    for (int i = 0; i < m; i++) {
        work[i] = available[i];
    }

    while (count < n) {
        int processFound = 0;

        for (int i = 0; i < n; i++) {
            if (!finish[i]) {
                int canComplete = 1;
                for (int j = 0; j < m; j++) {
                    if (need[i][j] > work[j]) {
                        canComplete = 0;
                        break;
                    }
                }
              
                if (canComplete) {
                    for (int j = 0; j < m; j++) {
                        work[j] += allocation[i][j]; // Release the resources
                    }
                    safeSequence[count++] = i;
                    finish[i] = 1;
                    processFound = 1;
                    break;
                }
            }
        }

        if (!processFound) {
            printf("The system is in an unsafe state.\n");
            return 0;
        }
    }

    printf("The system is in a safe state.\nSafe Sequence: ");
    for (int i = 0; i < n; i++) {
        printf("P%d ", safeSequence[i]);
    }
    printf("\n");

    return 1;
}

int main() {
    int n, m;

    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter the number of resource types: ");
    scanf("%d", &m);

    printf("\nEnter available resources:\n");
    for (int i = 0; i < m; i++) {
        printf("Resource %d: ", i + 1);
        scanf("%d", &available[i]);
    }

    printf("\nEnter maximum resources needed by each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d:\n", i + 1);
        for (int j = 0; j < m; j++) {
            printf("Resource %d: ", j + 1);
            scanf("%d", &maximum[i][j]);
        }
    }

    printf("\nEnter resources allocated to each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d:\n", i + 1);
        for (int j = 0; j < m; j++) {
            printf("Resource %d: ", j + 1);
            scanf("%d", &allocation[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            need[i][j] = maximum[i][j] - allocation[i][j];
        }
    }

    isSafeState(n, m);

    return 0;
}

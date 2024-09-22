#include <stdio.h>

void printSeries(int N) {
    for (int i = 1; i <= N; i++) {
        printf("%d", i);

        // Print a comma after each term except the last one
        if (i < N) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int N;

    // Input value
    printf("Enter the value of N: ");
    scanf("%d", &N);

    // Print the series
    printSeries(N);

    return 0;
}

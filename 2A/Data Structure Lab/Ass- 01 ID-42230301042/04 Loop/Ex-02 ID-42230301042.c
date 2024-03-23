#include <stdio.h>

void printSeries(int N) {
    int currentTerm = 1;

    for (int i = 1; i <= N; i++) {
        printf("%d", currentTerm);

        // Print a comma after each term except the last one
        if (i < N) {
            printf(", ");
        }

        // Increment the current term by 2 for the next odd number
        currentTerm += 2;
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

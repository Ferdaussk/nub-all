#include <stdio.h>

void printSeries(int N) {
    for (int i = 0; i < N; i++) {
        printf("%d", i % 2);

        // Print a comma after each term except the last one
        if (i < N - 1) {
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

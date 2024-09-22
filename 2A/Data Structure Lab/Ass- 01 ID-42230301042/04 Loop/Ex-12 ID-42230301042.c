#include <stdio.h>

// Function to print Fibonacci series up to N terms
void printFibonacci(int N) {
    int first = 1, second = 1, next;

    printf("Fibonacci series up to %d terms: ", N);

    for (int i = 0; i < N; i++) {
        printf("%d", first);

        if (i < N - 1) {
            printf(", ");
        }

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int N;

    // Input the number of terms
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Print the Fibonacci series
    printFibonacci(N);

    return 0;
}

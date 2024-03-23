#include <stdio.h>

// Function to calculate the factorial of a number
int calculateFactorial(int N) {
    int factorial = 1;

    for (int i = 1; i <= N; i++) {
        factorial *= i;
    }

    return factorial;
}

int main() {
    int N;

    // Input the number for factorial calculation
    printf("Enter a number (N): ");
    scanf("%d", &N);

    // Calculate and print the factorial
    int result = calculateFactorial(N);

    // Display the result in a formatted way
    printf("%d! =", N);
    for (int i = N; i >= 1; i--) {
        printf(" %d", i);
        if (i > 1) {
            printf(" X");
        }
    }
    printf(" = %d\n", result);

    return 0;
}

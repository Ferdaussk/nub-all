#include <stdio.h>

// Function to calculate the factorial of a number
int calculateFactorial(int num) {
    int factorial = 1;

    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    return factorial;
}

// Function to calculate nCr
int calculateCombination(int n, int r) {
    int numerator = calculateFactorial(n);
    int denominator = calculateFactorial(r) * calculateFactorial(n - r);

    return numerator / denominator;
}

int main() {
    int n, r;

    // Input values for n and r
    printf("Enter values for n and r (n >= r): ");
    scanf("%d %d", &n, &r);

    // Check if n is greater than or equal to r
    if (n >= r) {
        // Calculate and print nCr
        int result = calculateCombination(n, r);
        printf("%d C %d = %d\n", n, r, result);
    } else {
        printf("Invalid input: n must be greater than or equal to r.\n");
    }

    return 0;
}

#include <stdio.h>

// Function to calculate the sum of the series
int calculateSeriesSum(int n) {
    int sum = 0;
    int term = 0;

    for (int i = 1; i <= n; ++i) {
        term = term * 10 + i;
        sum += term;
    }

    return sum;
}

int main() {
    int n;

    // Input the value for n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate and print the sum of the series
    printf("Sum of the series up to %d terms: %d\n", n, calculateSeriesSum(n));

    return 0;
}

#include <stdio.h>

// Function to calculate the result of the series
double calculateResult(int N) {
    double result = 0.0;

    for (int i = 1; i <= N; i++) {
        result += i * i * (i + 1);
    }

    return result;
}

int main() {
    int N;

    // Input the number of terms
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Calculate and output the result
    double result = calculateResult(N);
    printf("Result: %.2f\n", result);

    return 0;
}

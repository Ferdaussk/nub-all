#include <stdio.h>

// Function to calculate the sum of the series
int calculateSum(int N) {
    int sum = 0;

    for (int i = 1; i <= N; i++) {
        // Alternating signs based on the parity of i
        if (i % 2 == 1) {
            sum += i;
        } else {
            sum -= i;
        }
    }

    return sum;
}

int main() {
    int N;

    // Input the number of terms
    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    // Calculate and output the sum
    int result = calculateSum(N);
    printf("Result: %d\n", result);

    return 0;
}

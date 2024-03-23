#include <stdio.h>

int main() {
    int N;
    double number, sum = 0.0;

    // Input value of N
    printf("Enter the number of inputs (N): ");
    scanf("%d", &N);

    // Input N numbers and calculate their sum
    for (int i = 0; i < N; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &number);
        sum += number;
    }

    // Calculate and print the average
    double average = sum / N;
    printf("\nAVG of %d inputs: %lf\n", N, average);

    return 0;
}

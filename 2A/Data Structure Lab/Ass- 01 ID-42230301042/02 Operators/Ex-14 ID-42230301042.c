#include <stdio.h>
#include <math.h>

int main() {
    double X;

    // Input value
    printf("Enter a floating-point number (X): ");
    scanf("%lf", &X);

    // Evaluate A, B, and C
    int A = ceil(X);    // Round up to the nearest integer
    int B = floor(X);   // Round down to the nearest integer
    double C = fabs(X); // Absolute value of X

    // Print the results
    printf("A = %d, B = %d, C = %.1f\n", A, B, C);

    return 0;
}

#include <stdio.h>
#include <math.h>

// Function to calculate the factorial of a number
double factorial(int n) {
    double result = 1.0;

    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

// Function to calculate cosine using series expansion
double cosine(double x, int terms) {
    double result = 0.0;

    for (int i = 0; i < terms; ++i) {
        result += pow(-1, i) * pow(x, 2 * i) / factorial(2 * i);
    }

    return result;
}

int main() {
    int x;
    
    // Input value for x
    printf("Enter the value of x: ");
    scanf("%d", &x);

    // Calculate and print the cosine of x using 5 terms in the series
    printf("cos(%d) = %.3f\n", x, cosine(x, 5));

    return 0;
}

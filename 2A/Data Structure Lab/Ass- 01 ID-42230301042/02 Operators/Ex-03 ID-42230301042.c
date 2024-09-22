#include <stdio.h>

int main() {
    float a, b;

    printf("Enter two numbers (a b): ");
    scanf("%f %f", &a, &b);

    float numerator = 3.31 * a * a + 2.01 * b * b * b;
    float denominator = 7.16 * b * b + 2.01 * a * a * a;

    if (denominator != 0) {
        float result = numerator / denominator;
        printf("X = %.6f\n", result);
    } else {
        printf("Division by zero is undefined.\n");
    }

    return 0;
}

#include <stdio.h>
#include <math.h>

#define DEG_TO_RAD(x) ((x) * M_PI / 180.0)

int main() {
    double x;

    // Input value
    printf("Enter a value for x (1 <= x <= 180): ");
    scanf("%lf", &x);

    // Evaluate the equation
    double result = log10(sin((x)));

    // Print the result
    printf("%.6f\n", result);

    return 0;
}

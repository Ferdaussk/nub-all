#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    // Input coefficients
    printf("Enter the coefficients (a b c): ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    float discriminant = b * b - 4 * a * c;

    // Check the nature of roots
    if (discriminant > 0) {
        // Real and distinct roots
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("%.2f %.2f\n", root1, root2);
    } else if (discriminant == 0) {
        // Real and equal roots
        float root = -b / (2 * a);
        printf("%.2f %.2f\n", root, root);
    } else {
        // Imaginary roots
        float realPart = -b / (2 * a);
        float imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("%.2f + %.2fi %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}

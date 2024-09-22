#include <stdio.h>

int main() {
    double a, b;
    int choice, subChoice;

    // Input values
    printf("Enter two real numbers (a b): ");
    scanf("%lf %lf", &a, &b);

    // Display main menu
    printf("Menu:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Perform arithmetic operations based on the user's choice
    switch (choice) {
        case 1:
            printf("Addition: %.6f\n", a + b);
            break;
        case 2:
            printf("Subtraction: %.6f\n", a - b);
            break;
        case 3:
            printf("Multiplication: %.6f\n", a * b);
            break;
        case 4:
            // Check if b is nonzero for division
            if (b != 0) {
                // Display submenu for division
                printf("1. Quotient\n");
                printf("2. Remainder\n");
                printf("Enter your choice (1-2): ");
                scanf("%d", &subChoice);

                // Perform division based on the submenu choice
                if (subChoice == 1) {
                    printf("Quotient: %.6f\n", a / b);
                } else if (subChoice == 2) {
                    printf("Remainder: %.6f\n", fmod(a, b));
                } else {
                    printf("Invalid choice\n");
                }
            } else {
                // Division by zero error
                printf("Error: Divisor is zero\n");
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

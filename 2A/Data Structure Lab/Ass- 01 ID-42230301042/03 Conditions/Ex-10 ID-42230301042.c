#include <stdio.h>

int main() {
    double number1, number2;
    char operator;

    // Input expression
    printf("Enter the expression (<number1> <operator> <number2>): ");
    scanf("%lf %c %lf", &number1, &operator, &number2);

    // Evaluate the expression based on the operator
    switch (operator) {
        case '+':
            printf("Addition: %.6f\n", number1 + number2);
            break;
        case '-':
            printf("Subtraction: %.6f\n", number1 - number2);
            break;
        case '*':
            printf("Multiplication: %.6f\n", number1 * number2);
            break;
        case '/':
            if (number2 != 0) {
                printf("Division: %.6f\n", number1 / number2);
            } else {
                printf("Division: Zero as divisor is not valid!\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

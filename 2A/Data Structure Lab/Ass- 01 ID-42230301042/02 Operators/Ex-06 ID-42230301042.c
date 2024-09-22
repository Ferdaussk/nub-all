#include <stdio.h>

int main() {
    int X, Y;

    // Input values
    printf("Enter two numbers (X Y): ");
    scanf("%d %d", &X, &Y);

    // Multiply and divide X by Y
    X *= Y;
    printf("Multiplication: %d\n", X);

    // Check if Y is not zero before performing division
    if (Y != 0) {
        X /= Y;
        printf("Division: %d\n", X);
    } else {
        printf("Division by zero is undefined.\n");
    }

    return 0;
}

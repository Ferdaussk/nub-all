#include <stdio.h>

int main() {
    int X;
    float Y;

    printf("Enter two numbers (X Y): ");
    scanf("%d %f", &X, &Y);

    printf("Addition: %d\n", X + (int)Y);
    printf("Subtraction: %d\n", X - (int)Y);
    printf("Multiplication: %d\n", (int)(X * Y));

    if (Y != 0) {
        printf("Quotient: %d\n", X / (int)Y);
        printf("Remainder: %d\n", X % (int)Y);
    } else {
        printf("Division by zero is undefined.\n");
    }

    return 0;
}

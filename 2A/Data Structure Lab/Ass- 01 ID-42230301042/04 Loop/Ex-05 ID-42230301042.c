#include <stdio.h>

int main() {
    int X, Y;

    // Input values for X and Y
    printf("Enter two numbers X and Y: ");
    scanf("%d %d", &X, &Y);

    // Print the square of X and increment/decrement until X reaches Y
    while (X != Y) {
        printf("%d, ", X * X);

        // Increment or decrement based on the relationship between X and Y
        if (X < Y) {
            X++;
        } else {
            X--;
        }
    }

    // Print "Reached!" when X is equal to Y
    printf("%d, Reached!\n", X * X);

    return 0;
}

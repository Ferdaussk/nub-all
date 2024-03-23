#include <stdio.h>

int main() {
    int X;

    // Input value
    printf("Enter a number (X): ");
    scanf("%d", &X);

    // Increment and decrement X inside printf
    printf("X++: %d\n", X++);
    printf("++X: %d\n", ++X);
    printf("X--: %d\n", X--);
    printf("--X: %d\n", --X);

    return 0;
}

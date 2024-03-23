#include <stdio.h>

int main() {
    int X, Y;

    // Input values
    printf("Enter two numbers (X Y): ");
    scanf("%d %d", &X, &Y);

    // Increment and decrement X by Y
    X += Y;
    printf("Incremented Value: %d\n", X);

    X -= Y;
    printf("Decremented Value: %d\n", X);

    return 0;
}

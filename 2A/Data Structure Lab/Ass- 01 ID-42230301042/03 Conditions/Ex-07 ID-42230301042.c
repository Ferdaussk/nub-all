#include <stdio.h>

int main() {
    int X, Y;

    // Input values
    printf("Enter two numbers (X Y): ");
    scanf("%d %d", &X, &Y);

    // Compare X and Y
    if (X > Y) {
        printf("%d is greater than %d\n", X, Y);
    } else if (X < Y) {
        printf("%d is less than %d\n", X, Y);
    } else {
        printf("%d is equal to %d\n", X, Y);
    }

    return 0;
}

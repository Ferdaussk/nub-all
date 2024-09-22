#include <stdio.h>

int main() {
    int a, b, c;

    // Input values
    printf("Enter three numbers (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Evaluate equations
    int X = a - b / 3 + c * 2 - 1;
    int Y = a - (b / (3 + c) * 2) - 1;
    int Z = a - ((b / 3) + c * 2) - 1;

    // Print the results
    printf("X = %d\n", X);
    printf("Y = %d\n", Y);
    printf("Z = %d\n", Z);

    return 0;
}

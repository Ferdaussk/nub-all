#include <stdio.h>

// Function to calculate x to the power y
int power(int x, int y) {
    int result = 1;

    for (int i = 0; i < y; i++) {
        result *= x;
    }

    return result;
}

int main() {
    int x, y;

    // Input values for x and y
    printf("Enter values for x and y (positive integers): ");
    scanf("%d %d", &x, &y);

    // Check if x and y are positive
    if (x >= 0 && y >= 0) {
        // Calculate and print x to the power y
        int result = power(x, y);
        printf("%d to the power %d = %d\n", x, y, result);
    } else {
        printf("Invalid input: x and y must be positive integers.\n");
    }

    return 0;
}

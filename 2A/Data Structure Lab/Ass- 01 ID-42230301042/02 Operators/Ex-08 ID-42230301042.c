#include <stdio.h>

int main() {
    int x, y;

    // Input values
    printf("Enter two numbers (x y): ");
    scanf("%d %d", &x, &y);

    // Use the conditional operator to find the maximum
    int max = (x > y) ? x : y;

    // Print the result
    printf("Max: %d\n", max);

    return 0;
}

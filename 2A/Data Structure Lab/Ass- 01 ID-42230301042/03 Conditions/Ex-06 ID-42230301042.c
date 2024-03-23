#include <stdio.h>

int main() {
    int number;

    // Input value
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is a nonzero positive number
    if (number > 0) {
        // Check if the number is a power of 2
        if ((number & (number - 1)) == 0) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    } else if (number == 0) {
        printf("Zero is not a valid input\n");
    } else {
        printf("Negative input is not valid\n");
    }

    return 0;
}

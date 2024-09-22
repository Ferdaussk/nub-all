#include <stdio.h>

int main() {
    double number;

    // Input value
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Decide whether the number is positive or not
    if (number > 0) {
        printf("Positive\n");
    } else if (number < 0) {
        printf("Negative\n");
    } else {
        printf("Zero\n");
    }

    return 0;
}

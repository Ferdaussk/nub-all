#include <stdio.h>

int main() {
    int number, reversedNumber = 0;

    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Reverse the digits
    while (number != 0) {
        int digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reversedNumber);

    return 0;
}

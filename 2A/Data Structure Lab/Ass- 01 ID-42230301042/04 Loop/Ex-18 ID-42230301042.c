#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is palindrome
bool isPalindrome(int n) {
    int originalNumber = n;
    int reversedNumber = 0;

    while (n > 0) {
        int digit = n % 10;
        reversedNumber = reversedNumber * 10 + digit;
        n /= 10;
    }

    return originalNumber == reversedNumber;
}

int main() {
    int number;

    // Input value for the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is a palindrome and print the result
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}

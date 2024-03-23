#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int number;

    // Input value for the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime and print the result
    if (isPrime(number)) {
        printf("%d is prime.\n", number);
    } else {
        printf("%d is not prime.\n", number);
    }

    return 0;
}

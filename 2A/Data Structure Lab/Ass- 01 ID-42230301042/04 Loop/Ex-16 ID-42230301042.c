#include <stdio.h>

// Function to calculate GCD of two numbers
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM of two numbers
int findLCM(int a, int b) {
    int gcd = findGCD(a, b);
    return (a * b) / gcd;
}

int main() {
    int num1, num2;

    // Input values for num1 and num2
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Check if the input is valid (both numbers are positive)
    if (num1 > 0 && num2 > 0) {
        // Calculate and print GCD and LCM
        int gcd = findGCD(num1, num2);
        int lcm = findLCM(num1, num2);

        printf("GCD: %d\n", gcd);
        printf("LCM: %d\n", lcm);
    } else {
        printf("Invalid input: Both numbers must be positive integers.\n");
    }

    return 0;
}

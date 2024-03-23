#include <stdio.h>

int main() {
    unsigned int number;

    // Input value
    printf("Enter a positive nonzero number: ");
    scanf("%u", &number);

    // Check if the number is a power of 2
    if (number > 0 && (number & (number - 1)) == 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

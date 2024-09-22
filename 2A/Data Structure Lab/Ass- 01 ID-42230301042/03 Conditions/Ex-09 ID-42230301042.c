#include <stdio.h>

int main() {
    char ch;

    // Input character
    printf("Enter a single character: ");
    scanf(" %c", &ch);

    // Check if the character is an alphabet, a digit, or a special character
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("Alphabet\n");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Special\n");
    }

    return 0;
}

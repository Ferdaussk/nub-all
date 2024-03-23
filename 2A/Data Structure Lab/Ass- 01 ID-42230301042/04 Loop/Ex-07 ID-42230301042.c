#include <stdio.h>

int main() {
    char input;

    // Run until the user types 'A'
    do {
        printf("Input: ");
        scanf(" %c", &input);  // Using a space before %c to consume any leading whitespace
        printf("Input: %c\n", input);
    } while (input != 'A' && input != 'a');

    return 0;
}

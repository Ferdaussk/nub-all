#include <stdio.h>

int main() {
    int integerValue;
    float floatValue;
    char charValue;

    printf("Enter an integer: ");
    scanf("%d", &integerValue);

    printf("Enter a floating-point number: ");
    scanf("%f", &floatValue);

    getchar();

    printf("Enter a character: ");
    scanf("%c", &charValue);

    printf("The integer value: %d\n", integerValue);
    printf("The floating point value: %f\n", floatValue);
    printf("The character value: %c\n", charValue);

    return 0;
}

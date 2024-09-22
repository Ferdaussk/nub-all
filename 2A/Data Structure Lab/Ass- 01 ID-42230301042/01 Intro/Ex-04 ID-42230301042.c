#include <stdio.h>

int main() {
    int integerVar;
    float floatVar;
    char charVar;

    integerVar = 5;
    floatVar = 3.141593;
    charVar = 'a';

    printf("The integer value: %d\n", integerVar);
    printf("The floating point value: %f\n", floatVar);
    printf("The character value: %c\n", charVar);

    integerVar = 100;
    floatVar = 1.618;
    charVar = 'z';

    printf("The integer value: %d\n", integerVar);
    printf("The floating point value: %f\n", floatVar);
    printf("The character value: %c\n", charVar);

    return 0;
}

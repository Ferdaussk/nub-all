#include <stdio.h>

int main() {
    long int longIntValue;
    long long int longLongIntValue;
    long double longDoubleValue;
    short int shortIntValue;

    longIntValue = 2147483647;
    longLongIntValue = 9223372036854775807;
    longDoubleValue = 1.1E+4932;
    shortIntValue = 32767;

    printf("The long int value: %ld\n", longIntValue);
    printf("The long long int value: %lld\n", longLongIntValue);
    printf("The long double value: %Le\n", longDoubleValue);
    printf("The short int value: %d\n", shortIntValue);

    longIntValue = -2147483648;
    longLongIntValue = -9223372036854775808;
    longDoubleValue = 3.4E-4932;
    shortIntValue = -32768;

    printf("The long int value: %ld\n", longIntValue);
    printf("The long long int value: %lld\n", longLongIntValue);
    printf("The long double value: %Le\n", longDoubleValue);
    printf("The short int value: %d\n", shortIntValue);

    return 0;
}

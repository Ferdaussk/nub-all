#include <stdio.h>

int main() {
    unsigned int unsignedIntValue;
    unsigned long int unsignedLongIntValue;
    unsigned long long int unsignedLongLongIntValue;
    unsigned short int unsignedShortIntValue;

    unsignedIntValue = 4294967295;
    unsignedLongIntValue = 4294967295;
    unsignedLongLongIntValue = 18446744073709551615ULL;
    unsignedShortIntValue = 65535;

    printf("The unsigned int value: %u\n", unsignedIntValue);
    printf("The unsigned long int value: %lu\n", unsignedLongIntValue);
    printf("The unsigned long long int value: %llu\n", unsignedLongLongIntValue);
    printf("The unsigned short int value: %u\n", unsignedShortIntValue);

    unsignedIntValue = 0;
    unsignedLongIntValue = 0;
    unsignedLongLongIntValue = 0;
    unsignedShortIntValue = 0;

    printf("The unsigned int value: %u\n", unsignedIntValue);
    printf("The unsigned long int value: %lu\n", unsignedLongIntValue);
    printf("The unsigned long long int value: %llu\n", unsignedLongLongIntValue);
    printf("The unsigned short int value: %u\n", unsignedShortIntValue);

    return 0;
}

#include <stdio.h>

int main() {
    double doubleValue;
    int boolValue;

    doubleValue = 3.14;
    boolValue = 1;

    printf("The double value: %e\n", doubleValue);
    printf("The boolean value: %d\n", boolValue);

    doubleValue = 1.618039;
    boolValue = 0;

    printf("The double value: %f\n", doubleValue);
    printf("The boolean value: %d\n", boolValue);

    return 0;
}

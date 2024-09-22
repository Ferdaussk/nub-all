#include <stdio.h>

int main() {
    int integerValue = -150;
    float floatValue = 123.125;

    // (a) Floating to integer using assignment
    int convertedInt1 = floatValue;
    printf("Assignment: %.6f assigned to an int produces %d\n", floatValue, convertedInt1);

    // (a) Integer to floating using assignment
    float convertedFloat1 = integerValue;
    printf("Assignment: %d assigned to a float produces %.6f\n", integerValue, convertedFloat1);

    // (b) Floating to integer using type casting
    int convertedInt2 = (int)floatValue;
    printf("Type Casting: (int) %.6f produces %d\n", floatValue, convertedInt2);

    // (b) Integer to floating using type casting
    float convertedFloat2 = (float)integerValue;
    printf("Type Casting: (float) %d produces %.6f\n", integerValue, convertedFloat2);

    return 0;
}

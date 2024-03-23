#include <stdio.h>

int main() {
    int firstValue, lastValue, middleValue;

    printf("Enter three integer numbers: ");
    scanf("%d %*d %d", &firstValue, &lastValue);

    printf("First Value = %d, Last Value = %d\n", firstValue, lastValue);

    return 0;
}

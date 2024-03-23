#include <stdio.h>

#define PI 3.14159265359

int main() {
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = 2 * PI * radius;
    printf("Area: %.2f\n", area);

    return 0;
}

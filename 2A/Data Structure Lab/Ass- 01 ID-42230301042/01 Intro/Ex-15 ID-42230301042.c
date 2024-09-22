#include <stdio.h>

int main() {
    float number;

    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    printf("(a) Val: %10.6f\n", number);
    printf("(b) Val:%10.2f\n", number);
    printf("(c) Val:%.2f\n", number);
    printf("(d) Val:%.0f\n", number);
    printf("(e) Val: %e\n", number);

    return 0;
}

#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    // Input angles
    printf("Enter three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);

    // Check if the triangle is valid
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && angle1 + angle2 + angle3 == 180) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

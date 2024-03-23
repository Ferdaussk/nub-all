#include <stdio.h>

int main() {
    int year;

    // Input value
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

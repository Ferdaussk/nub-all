#include <stdio.h>

int main() {
    int a, b, c;

    // Input values
    printf("Enter three numbers (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Decide if the statements are True (1) or False (0)
    int statement1 = a > b;
    int statement2 = b >= 0;
    int statement3 = c != 0;

    // Print the results
    printf("1) %d\n", statement1);
    printf("2) %d\n", statement2);
    printf("3) %d\n", statement3);

    return 0;
}

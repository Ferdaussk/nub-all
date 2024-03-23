#include <stdio.h>

int main() {
    int a, b, c;

    // Input values
    printf("Enter three numbers (a b c): ");
    scanf("%d %d %d", &a, &b, &c);

    // Decide if the statements are True (1) or False (0)
    int statementA = a > 0;
    int statementB = b < 0;
    int statementC = c != 0;

    // Print the results
    printf("a) %d\n", statementA);
    printf("b) %d\n", statementB);
    printf("c) %d\n", statementC);

    return 0;
}

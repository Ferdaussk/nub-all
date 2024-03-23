#include <stdio.h>

int variable = 10;

int main() {
    printf("A. Global: %d\n", variable);

    int variable = 20;

    printf("B. Local: %d\n", variable);

    printf("C. Global: %d\n", variable);

    return 0;
}

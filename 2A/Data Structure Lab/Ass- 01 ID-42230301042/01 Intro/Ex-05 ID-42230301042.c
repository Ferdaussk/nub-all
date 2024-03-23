#include <stdio.h>

int main() {
    int uninitializedVar;
    int initializedVar = 42;
    int var1 = 10, var2 = 20, var3 = 30;
    int sameValueVar1 = 5, sameValueVar2 = 5, sameValueVar3 = 5;

    printf("a) Uninitialized variable: %d\n", uninitializedVar);
    printf("b) Initialized variable: %d\n", initializedVar);
    printf("c) Multiple variables with different values: %d, %d, %d\n", var1, var2, var3);
    printf("d) Multiple variables with the same value: %d, %d, %d\n", sameValueVar1, sameValueVar2, sameValueVar3);

    return 0;
}

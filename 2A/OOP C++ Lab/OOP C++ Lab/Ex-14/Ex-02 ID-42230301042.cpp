#include <iostream>

int main() {
    int evenNumbers[10];

    for (int i = 0, num = 2; i < 10; ++i, num += 2) {
        evenNumbers[i] = num;
    }

    for (int i = 0; i < 10; ++i) {
        std::cout << evenNumbers[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}

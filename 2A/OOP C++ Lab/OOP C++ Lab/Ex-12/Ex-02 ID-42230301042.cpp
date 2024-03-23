#include <iostream>

int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i == 6) {
            break;
        }
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}

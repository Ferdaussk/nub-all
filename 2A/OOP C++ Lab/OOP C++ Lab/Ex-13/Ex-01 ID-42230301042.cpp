#include <iostream>

int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i == 4 || i == 7) {
            continue;
        }
        std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}

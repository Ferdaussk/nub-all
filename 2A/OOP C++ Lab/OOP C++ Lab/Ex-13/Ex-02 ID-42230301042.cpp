#include <iostream>

int main() {
    int i = 1;

    while (i <= 10) {
        if (i % 5 == 0) {
            ++i;
            continue;
        }
        std::cout << i << " ";
        ++i;
    }

    std::cout << std::endl;

    return 0;
}

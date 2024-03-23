#include <iostream>

int main() {
    float floatArray[] = {1.2, 3.4, 5.6, 7.8, 9.0};

    for (int i = 0; i < 5; ++i) {
        std::cout << floatArray[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}

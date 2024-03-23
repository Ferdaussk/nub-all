#include <iostream>

int main() {
    int number;

    do {
        std::cout << "Enter a number (-1 to stop): ";
        std::cin >> number;
    } while (number != -1);

    std::cout << "Program stopped." << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int integerVar = 10;
    float floatVar = 3.14;
    char charVar = 'A';

    // Print addresses using pointers
    std::cout << "Address of integerVar: " << &integerVar << std::endl;
    std::cout << "Address of floatVar: " << &floatVar << std::endl;
    std::cout << "Address of charVar: " << static_cast<void*>(&charVar) << std::endl;

    return 0;
}

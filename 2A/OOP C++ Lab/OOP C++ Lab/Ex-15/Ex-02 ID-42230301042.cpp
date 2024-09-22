#include <iostream>

int main() {
    char charArray[] = "Hello";

    std::cout << "Original String: " << charArray << std::endl;

    charArray[1] = 'i';

    std::cout << "Modified String: " << charArray << std::endl;

    return 0;
}

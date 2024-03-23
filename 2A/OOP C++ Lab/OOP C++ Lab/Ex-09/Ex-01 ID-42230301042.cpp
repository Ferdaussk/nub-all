#include <iostream>

int main() {
    int age;
    double height;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Enter your height in meters: ";
    std::cin >> height;

    if (age >= 12 && height >= 1.4) {
        std::cout << "You can ride the roller coaster!" << std::endl;
    } else {
        std::cout << "Sorry, you cannot ride the roller coaster." << std::endl;
    }

    return 0;
}

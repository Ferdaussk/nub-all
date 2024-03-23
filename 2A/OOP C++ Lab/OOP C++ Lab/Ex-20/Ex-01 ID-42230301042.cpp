#include <iostream>

int multiply(int num1, int num2) {
    return num1 * num2;
}

double multiply(double num1, double num2) {
    return num1 * num2;
}

int main() {
    int resultInt = multiply(5, 7);
    std::cout << "Product of 5 and 7 (int): " << resultInt << std::endl;

    double resultDouble = multiply(3.5, 2.0);
    std::cout << "Product of 3.5 and 2.0 (double): " << resultDouble << std::endl;

    return 0;
}

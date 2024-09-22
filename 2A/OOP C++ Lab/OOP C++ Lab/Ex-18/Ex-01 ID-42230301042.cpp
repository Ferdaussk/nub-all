#include <iostream>

int max(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int result = max(8, 12);
    std::cout << "The maximum of 8 and 12 is: " << result << std::endl;

    return 0;
}

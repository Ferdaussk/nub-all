#include <iostream>

int main() {
    double doubleValue = 12.345;
    int intValue = static_cast<int>(doubleValue);

    std::cout << "Original Double Value: " << doubleValue << std::endl;
    std::cout << "Casted Integer Value: " << intValue << std::endl;

    return 0;
}

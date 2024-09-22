#include <iostream>

int main() {
    float floatValue = 7.89;
    int intValue = static_cast<int>(floatValue);

    std::cout << "Original Float Value: " << floatValue << std::endl;
    std::cout << "Casted Integer Value: " << intValue << std::endl;

    return 0;
}

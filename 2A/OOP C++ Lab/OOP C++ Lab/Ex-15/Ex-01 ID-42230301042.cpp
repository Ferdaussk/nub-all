#include <iostream>

int main() {
    int integerArray[] = {1, 2, 3, 4, 5, 6};

    std::cout << "Original Array: ";
    for (int i = 0; i < 6; ++i) {
        std::cout << integerArray[i] << " ";
    }

    for (int i = 0, j = 5; i < j; ++i, --j) {
        int temp = integerArray[i];
        integerArray[i] = integerArray[j];
        integerArray[j] = temp;
    }

    std::cout << "\nReversed Array: ";
    for (int i = 0; i < 6; ++i) {
        std::cout << integerArray[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}

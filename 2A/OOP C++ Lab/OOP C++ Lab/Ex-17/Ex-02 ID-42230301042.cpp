#include <iostream>

int main() {
    int myArray[] = {1, 2, 3, 4, 5};

    // Create a pointer for the array
    int* arrayPointer = myArray;

    // Print all elements using the pointer
    for (int i = 0; i < 5; ++i) {
        std::cout << "Element " << i + 1 << ": " << *(arrayPointer + i) << std::endl;
    }

    return 0;
}

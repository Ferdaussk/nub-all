#include <iostream>

struct Rectangle {
    double width;
    double height;
};

int main() {
    Rectangle myRectangle;

    // Set properties
    myRectangle.width = 5.0;
    myRectangle.height = 8.0;

    // Print properties
    std::cout << "Rectangle Width: " << myRectangle.width << std::endl;
    std::cout << "Rectangle Height: " << myRectangle.height << std::endl;

    return 0;
}

#include <iostream>

double calculateCircleArea(double radius) {
    return 3.141592653589793 * radius * radius;
}

int main() {
    double radius = 5.0;
    double area = calculateCircleArea(radius);
    std::cout << "The area of a circle with radius " << radius << " is: " << area << std::endl;

    return 0;
}

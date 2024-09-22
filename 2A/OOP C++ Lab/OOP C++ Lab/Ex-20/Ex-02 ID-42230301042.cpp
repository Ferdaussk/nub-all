#include <iostream>

double area(double length, double width) {
    return length * width;
}

double area(double radius) {
    return 3.141592653589793 * radius * radius;
}

int main() {
    double rectangleArea = area(4.0, 6.0);
    std::cout << "Area of the rectangle: " << rectangleArea << std::endl;

    double circleArea = area(2.5);
    std::cout << "Area of the circle: " << circleArea << std::endl;

    return 0;
}

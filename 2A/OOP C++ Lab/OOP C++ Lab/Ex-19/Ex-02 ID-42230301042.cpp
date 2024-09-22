#include <iostream>

float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    // Example usage
    float base = 4.0;
    float height = 6.0;
    float area = calculateTriangleArea(base, height);

    std::cout << "The area of the triangle with base " << base << " and height " << height
              << " is: " << area << std::endl;

    return 0;
}

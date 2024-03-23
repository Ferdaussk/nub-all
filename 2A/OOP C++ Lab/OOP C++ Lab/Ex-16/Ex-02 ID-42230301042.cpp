#include <iostream>

struct Point {
    int x;
    int y;
};

void printPoint(const Point& p) {
    std::cout << "Point Coordinates: (" << p.x << ", " << p.y << ")" << std::endl;
}

int main() {
    Point myPoint;

    // Set coordinates
    myPoint.x = 3;
    myPoint.y = 7;

    // Print coordinates using the function
    printPoint(myPoint);

    return 0;
}

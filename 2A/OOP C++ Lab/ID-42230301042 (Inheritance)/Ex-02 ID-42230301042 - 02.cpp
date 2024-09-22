#include <iostream>
using namespace std;

class Vehicle {
public:
    int x, y;

    // Constructor without parameters
    Vehicle() {
        x = 0;
        y = 0;
    }

    // Move methods
    void moveUp() { y += 1; }
    void moveDown() { y -= 1; }
    void moveRight() { x += 1; }
    void moveLeft() { x -= 1; }

    // Method to check if two vehicles are at the same position
    bool equals(const Vehicle& other) const {
        return (x == other.x && y == other.y);
    }

    // Function to return current position
    string position() const {
        return "(" + to_string(x) + " , " + to_string(y) + ")";
    }
};

int main() {
    // Part 1
    cout << "Part 1" << endl;
    cout << "------" << endl;
    Vehicle car;
    cout << car.position() << endl;
    car.moveUp();
    cout << car.position() << endl;
    car.moveLeft();
    cout << car.position() << endl;
    car.moveDown();
    cout << car.position() << endl;
    car.moveRight();
    cout << car.position() << endl;

    // Part 2
    cout << "------" << endl;
    cout << "Part 2" << endl;
    cout << "------" << endl;
    Vehicle car1;
    cout << car1.position() << endl;
    car1.moveLeft();
    cout << car1.position() << endl;
    Vehicle car2;
    car2.moveLeft();
    cout << (car1.equals(car2) ? "true" : "false") << endl;
    car2.moveDown();
    cout << (car1.equals(car2) ? "true" : "false") << endl;

    return 0;
}

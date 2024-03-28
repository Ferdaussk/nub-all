#include <iostream>
#include <string>
#include <cmath> // for math functions like M_PI
using namespace std;

class Shape {
protected:
    string name;
    float base, height, radius;

public:
    // Constructor
    Shape(string name = "Shape", float base = 0, float height = 0, float radius = 0)
        : name(name), base(base), height(height), radius(radius) {}

    // Function to calculate area (pure virtual)
    virtual float area() const = 0;

    // Function to display details
    virtual void details() const {
        cout << "Details of " << name << ":" << endl;
        cout << "Base = " << base << endl;
        cout << "Height = " << height << endl;
        cout << "Radius = " << radius << endl;
        cout << "Area = " << area() << endl << endl;
    }
};

class Triangle : public Shape {
public:
    // Constructor
    Triangle(float base = 0, float height = 0) : Shape("Triangle", base, height) {}

    // Function to calculate area
    float area() const override {
        return 0.5 * base * height;
    }
};

class Circle : public Shape {
public:
    // Constructor
    Circle(float radius = 0) : Shape("Circle", 0, 0, radius) {}

    // Function to calculate area
    float area() const override {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape sp;
    Shape* adsp;

    Triangle tng(3.6, 5.5);
    tng.details();
    
    Circle cir(3.6);
    cir.details();
    
    return 0;
}

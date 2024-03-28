#include <iostream>
#include <string>

class Car {
private:
    std::string model;
    std::string make;
    int rentalFee;

public:
    // Constructor without rental fee
    Car(const std::string& _model, const std::string& _make)
        : model(_model), make(_make), rentalFee(0) {
        std::cout << "Car created with no rental fee." << std::endl;
    }

    // Constructor with rental fee
    Car(const std::string& _model, const std::string& _make, int _rentalFee)
        : model(_model), make(_make), rentalFee(_rentalFee) {
        std::cout << "Car created with rental fee " << rentalFee << ". Rental Fee: " << rentalFee << "." << std::endl;
    }

    // Method to display car details
    void displayDetails() {
        std::cout << "Model: " << model << ", Make: " << make;
        if (rentalFee > 0)
            std::cout << ", Rental Fee: " << rentalFee;
        std::cout << std::endl;
    }
};

int main() {
    // Creating Car objects
    Car car1("Sedan", "Toyota");
    Car car2("SUV", "Ford", 50);

    // Displaying car details
    car1.displayDetails();
    car2.displayDetails();

    return 0;
}

#include <iostream>

int main() {
    double weight, distance;

    std::cout << "Enter the weight of the package in kg: ";
    std::cin >> weight;

    std::cout << "Enter the distance of shipping in km: ";
    std::cin >> distance;

    double shippingCost;

    if (weight < 5) {
        shippingCost = 5.0 * distance;
    } else if (weight < 20) {
        shippingCost = 10.0 * distance;
    } else {
        shippingCost = 15.0 * distance;
    }

    std::cout << "Shipping cost: $" << shippingCost << std::endl;

    return 0;
}

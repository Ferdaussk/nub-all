#include <iostream>
#include <string>

int main() {
    std::string city = "New York";
    std::string country = "USA";

    std::string location = city + ", " + country;

    std::cout << "Location: " << location << std::endl;

    return 0;
}

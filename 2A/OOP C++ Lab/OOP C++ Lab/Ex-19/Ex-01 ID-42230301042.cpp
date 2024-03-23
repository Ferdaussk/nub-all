#include <iostream>
#include <string>

void printGreeting(const std::string& name, int age) {
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
}

int main() {
    // Example usage
    printGreeting("John", 25);

    return 0;
}

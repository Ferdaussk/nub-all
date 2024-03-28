#include <iostream>
#include <string>

class Employee {
private:
    int employeeID;
    std::string name;
    double salary;

public:
    // Constructor without salary
    Employee(int _employeeID, const std::string& _name)
        : employeeID(_employeeID), name(_name), salary(0) {
        std::cout << "Employee " << employeeID << " created with no salary." << std::endl;
    }

    // Constructor with salary
    Employee(int _employeeID, const std::string& _name, double _salary)
        : employeeID(_employeeID), name(_name), salary(_salary) {
        std::cout << "Employee " << employeeID << " created with salary " << salary << ". Annual Salary: " << calculateAnnualSalary() << "." << std::endl;
    }

    // Method to calculate annual salary
    double calculateAnnualSalary() const {
        return salary * 12;
    }
};

int main() {
    // Creating Employee objects
    Employee employee1(1, "John");
    Employee employee2(2, "Jane", 5000);

    return 0;
}

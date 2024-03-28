#include <iostream>
#include <string>

class Student {
private:
    int rollNumber;
    std::string name;
    int marks;
    char grade;

public:
    // Constructor without marks
    Student(int _rollNumber, const std::string& _name)
        : rollNumber(_rollNumber), name(_name), marks(-1), grade('F') {
        std::cout << "Student " << rollNumber << " created with no marks." << std::endl;
    }

    // Constructor with marks
    Student(int _rollNumber, const std::string& _name, int _marks)
        : rollNumber(_rollNumber), name(_name), marks(_marks) {
        std::cout << "Student " << rollNumber << " created with marks " << marks << ". Grade: ";
        calculateGrade();
        std::cout << grade << "." << std::endl;
    }

    // Method to calculate grade based on marks
    void calculateGrade() {
        if (marks >= 90)
            grade = 'A';
        else if (marks >= 80)
            grade = 'B';
        else if (marks >= 70)
            grade = 'C';
        else if (marks >= 60)
            grade = 'D';
        else
            grade = 'F';
    }
};

int main() {
    // Creating Student objects
    Student student1(101, "Tom");
    Student student2(102, "Lisa", 75);

    return 0;
}

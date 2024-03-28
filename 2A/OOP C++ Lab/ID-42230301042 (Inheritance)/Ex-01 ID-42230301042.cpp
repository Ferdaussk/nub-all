#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string department;
public:
    Student(string name = "Just a student", string dept = "nothing")
        : name(name), department(dept) {}

    void setDepartment(string dept) {
        department = dept;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    string toString() {
        return "Name: " + name + " Department: " + department;
    }
};

class BBA_Student : public Student {
public:
    // Constructor
    BBA_Student(string name = "Just a student") : Student(name, "BBA") {}
    
    // Overriding toString method to include "BBA" department
    string toString() {
        return "Name: " + getName() + " Department: " + "BBA";
    }
};

int main() {
    // Testing the code
    cout << BBA_Student().toString() << endl;
    cout << BBA_Student("Humpty Dumpty").toString() << endl;
    cout << BBA_Student("Little Bo Peep").toString() << endl;

    return 0;
}

#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string ISBN;

public:
    // Parameterized constructor
    Book(const std::string& _title, const std::string& _author, const std::string& _ISBN)
        : title(_title), author(_author), ISBN(_ISBN) {
        std::cout << "Book \"" << title << "\" created." << std::endl;
    }

    // Destructor
    ~Book() {
        std::cout << "Book \"" << title << "\" destroyed." << std::endl;
    }
};

int main() {
    // Creating Book objects
    Book book1("Introduction to OOP", "John Doe", "123456789");
    Book book2("Data Structures and Algorithms", "Jane Smith", "987654321");

    return 0;
}

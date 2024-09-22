#include <iostream>
#include <string>

int main() {
    std::string bookTitle = "The Great Gatsby";
    std::string author = "F. Scott Fitzgerald";

    std::string bookInfo = bookTitle + " by " + author;

    std::cout << "Book Information: " << bookInfo << std::endl;

    return 0;
}

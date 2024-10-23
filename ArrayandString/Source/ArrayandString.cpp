#include "Library.h"
#include <iostream>

int main() {
    Library myLibrary(2); // Initialize library with capacity of 2

    Book book1("The Catcher in the Rye", "J.D. Salinger", 1951);
    Book book2("To Kill a Mockingbird", "Harper Lee", 1960);
    Book book3("1984", "George Orwell", 1949);

    myLibrary.addBook(book1);
    myLibrary.addBook(book2);
    myLibrary.addBook(book3); // This will trigger resizing

    myLibrary.displayBooks();

    myLibrary.sortBooksByTitle();
    std::cout << "After sorting:" << std::endl;
    myLibrary.displayBooks();

    Book* foundBook = myLibrary.searchBook("1984");
    if (foundBook) {
        std::cout << "Found book: ";
        foundBook->display();
    }

    myLibrary.deleteBook("The Catcher in the Rye");
    std::cout << "After deletion:" << std::endl;
    myLibrary.displayBooks();

    return 0;
}

#pragma once
#include "Book.h"

class Library {
private:
    Book* books;        // Dynamic array of books
    int capacity;       // Maximum number of books the library can hold
    int bookCount;      // Current number of books

    // Function to resize the book array when full
    void resizeLibrary();

public:
    // Constructor
    Library(int capacity);

    // Destructor
    ~Library();

    // Function to add a new book to the library
    void addBook(const Book& book);

    // Function to display all books
    void displayBooks() const;

    // Function to search for a book by title
    Book* searchBook(const std::string& title) const;

    // Function to sort books by title
    void sortBooksByTitle();

    // Function to delete a book by title
    void deleteBook(const std::string& title);
};

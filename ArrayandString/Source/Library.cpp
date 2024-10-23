#include "Library.h"
#include <iostream>
#include <algorithm>

// Constructor
Library::Library(int capacity) : capacity(capacity), bookCount(0) {
    books = new Book[capacity]; // Initialize dynamic array
}

// Destructor
Library::~Library() {
    delete[] books; // Free dynamically allocated memory
}

// Function to add a new book to the library
void Library::addBook(const Book& book) {
    if (bookCount == capacity) {
        resizeLibrary(); // Resize if the library is full
    }
    books[bookCount++] = book;
}

// Function to resize the book array when full
void Library::resizeLibrary() {
    capacity *= 2; // Double the capacity
    Book* newBooks = new Book[capacity];

    // Copy existing books to the new array
    for (int i = 0; i < bookCount; ++i) {
        newBooks[i] = books[i];
    }

    delete[] books; // Free old array
    books = newBooks; // Assign the new array
}

// Function to display all books
void Library::displayBooks() const {
    for (int i = 0; i < bookCount; ++i) {
        books[i].display();
    }
}

// Function to search for a book by title
Book* Library::searchBook(const std::string& title) const {
    for (int i = 0; i < bookCount; ++i) {
        if (books[i].getTitle() == title) {
            return &books[i];
        }
    }
    return nullptr; // Return nullptr if not found
}

// Function to sort books by title
void Library::sortBooksByTitle() {
    std::sort(books, books + bookCount, [](const Book& a, const Book& b) {
        return a.getTitle() < b.getTitle();
        });
}

// Function to delete a book by title
void Library::deleteBook(const std::string& title) {
    for (int i = 0; i < bookCount; ++i) {
        if (books[i].getTitle() == title) {
            for (int j = i; j < bookCount - 1; ++j) {
                books[j] = books[j + 1]; // Shift elements left
            }
            --bookCount; // Decrease the count
            return;
        }
    }
    std::cout << "Book not found!" << std::endl;
}

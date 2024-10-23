#include "Book.h"
#include <iostream>

// Default Constructor
Book::Book() : title(""), author(""), year(0) {}

// Parameterized Constructor
Book::Book(const std::string& title, const std::string& author, int year)
    : title(title), author(author), year(year) {}

// Getter methods
std::string Book::getTitle() const {
    return title;
}

std::string Book::getAuthor() const {
    return author;
}

int Book::getYear() const {
    return year;
}

// Setter methods
void Book::setTitle(const std::string& title) {
    this->title = title;
}

void Book::setAuthor(const std::string& author) {
    this->author = author;
}

void Book::setYear(int year) {
    this->year = year;
}

// Function to display book details
void Book::display() const {
    std::cout << "Title: " << title << ", Author: " << author << ", Year: " << year << std::endl;
}

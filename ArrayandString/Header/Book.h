#pragma once
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;

public:
    // Constructors
    Book();
    Book(const std::string& title, const std::string& author, int year);

    // Getter methods
    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;

    // Setter methods
    void setTitle(const std::string& title);
    void setAuthor(const std::string& author);
    void setYear(int year);

    // Function to display book details
    void display() const;
};

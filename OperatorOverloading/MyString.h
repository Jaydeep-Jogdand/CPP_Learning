#pragma once
#include <iostream>
#include <string>
#include <stdexcept> // For std::out_of_range

class MyString {
private:
    std::string str; // Use std::string to hold the string

public:
    // Constructor
    MyString(const std::string& input = "");

    // Copy constructor
    MyString(const MyString& other);

    // Overload the addition operator
    MyString operator+(const MyString& other) const;

    // Overload the subscript operator
    char& operator[](size_t index);

    // Overload the equality operator
    bool operator==(const MyString& other) const;

    // Overload the output stream operator
    friend std::ostream& operator<<(std::ostream& os, const MyString& myString);

    // Get the length of the string
    size_t getLength() const { return str.length(); }
};

#include "MyString.h"

// Constructor
MyString::MyString(const std::string& input) : str(input) {}

// Copy constructor
MyString::MyString(const MyString& other) : str(other.str) {}

// Overload the addition operator
MyString MyString::operator+(const MyString& other) const {
    return MyString(str + other.str); // Concatenate using std::string
}

// Overload the subscript operator
char& MyString::operator[](size_t index) {
    if (index >= str.length()) {
        throw std::out_of_range("Index out of range");
    }
    return str[index]; // Return the character at the given index
}

// Overload the equality operator
bool MyString::operator==(const MyString& other) const {
    return str == other.str; // Compare the two strings
}

// Overload the output stream operator
std::ostream& operator<<(std::ostream& os, const MyString& myString) {
    os << myString.str; // Output the string
    return os; // Return the stream
}

#include <iostream>
#include "MyString.h"

int main() {
    MyString str1("Hello");
    MyString str2(" World!");

    // Using addition operator to concatenate strings
    MyString concatenated = str1 + str2;

    // Displaying the concatenated string
    std::cout << "Concatenated String: " << concatenated << std::endl;

    // Accessing individual characters using subscript operator
    std::cout << "First character of concatenated string: " << concatenated[0] << std::endl;

    // Checking for equality
    MyString str3("Hello World!");
    if (concatenated == str3) {
        std::cout << "The concatenated string is equal to 'Hello World!'" << std::endl;
    }
    else {
        std::cout << "The concatenated string is not equal to 'Hello World!'" << std::endl;
    }

    return 0;
}

#pragma once
#include <iostream>

class Date {
private:
    int day, month, year;

public:
    // Method to read date in DD/MM/YYYY format
    void readDate();

    // Method to print the date
    void printDate();
};

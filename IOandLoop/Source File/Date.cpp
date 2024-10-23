#include "Date.h"
#include <iostream>
#include <cassert>

using namespace std;

// Read date from user input in DD/MM/YYYY format
void Date::readDate() {
    cin >> day;    // Read day
    cin.get();     // Skip '/'
    cin >> month;  // Read month
    cin.get();     // Skip '/'
    cin >> year;   // Read year
    assert(day >= 1 && day <= 31 && "Day must be between 1 and 31");
    assert(month >= 1 && month <= 12 && "Month must be between 1 and 12");
}

// Print day, month, and year separately
void Date::printDate() {
    cout << "Day: " << day << endl;
    cout << "Month: " << month << endl;
    cout << "Year: " << year << endl;
}

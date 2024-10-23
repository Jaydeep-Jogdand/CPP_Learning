#include "Date.h"
#include <iostream>
using namespace std;

int main() {
    Date date;

    // Loop until the user enters a valid date
    char ch;
    do {
        cout << "Enter date in DD/MM/YYYY format: ";
        date.readDate();   // Read date input
        cout << endl;

        date.printDate();  // Print the day, month, and year
       // break;  // Exit after valid input
        cout << "Do you want to continue Enter y for Yes n For no : "<<endl;
        cin >> ch;
    } while (ch == 'y');
    return 0;
}

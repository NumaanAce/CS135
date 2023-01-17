// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std; // Using namespace to avoid using ::

int main(){ // Initializing main variable
    int year; // Initializing year variable
    cout << "Enter a year: ";
    cin >> year; // Storing entry in year variable
    
    if (year % 4 != 0){ // If year is indivisible by 4, or provides a remainder when divided by 4, output is common year.
        cout << "Entered year is a common year.";
    }
    else if (year % 100 != 0){ // If year is indivisible by 100, or provides a remainder when divided by 100, output is leap year.
        cout << "Entered year is a leap year.";
    }
    else if (year % 400 != 0){ // If year is indivisible 400, or provides a remainder when divided by 400, output is common year.
        cout << "Entered year is a common year.";
    }
    else{ // If any other conditions than previously named, output is leap year.
        cout << "Entered year is a leap year.";
    }
}
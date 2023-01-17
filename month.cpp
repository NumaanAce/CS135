// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){
    int year, month; // Initializing year and month variable.
    cout << "Enter a year: ";
    cin >> year; // Storing entry in year variable.
    cout << "Enter a month: ";
    cin >> month; // Storing entry in month variable.

    int leapYear;

    if (year % 4 != 0){ // If year is indivisible by 4, or provides a remainder when divided by 4, output is common year.
        leapYear = false;
    }
    else if (year % 100 != 0){ // If year is indivisible by 100, or provides a remainder when divided by 100, output is leap year.
        leapYear = true;
    }
    else if (year % 400 != 0){ // If year is indivisible 400, or provides a remainder when divided by 400, output is common year.
        leapYear = false;
    }
    else{ // If any other conditions than previously named, output is leap year.
        leapYear = true;
    }
    
    if (month == 2){ // If the month is February, leap year is evaluated. If it is a leap year, February has 29 days. Else, it has 28 days.
        if (leapYear){
            cout << "Entered month of entered year has 29 days";
        }
        else{
            cout << "Entered month of entered year has 28 days";
        }
    }
    else if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)){ // If month is a knuckle bump month, 31 days is output.
        cout << "Entered month of entered year has 31 days";
    }
    else{
        cout << "Entered month of entered year has 30 days"; // If month is not a knuckle bump month, 30 days is output.
    }
}
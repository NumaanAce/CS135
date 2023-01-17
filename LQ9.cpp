// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
#include <string>

using namespace std;

class Date {
public:
    int year;
    int month;
    int day;
    string day_of_week;
};

void printDate(Date *input) {
    cout << input->day_of_week << ", " << input->month << "/" << input->day << "/" << input->year << endl;
}

int main() {
    Date example;
    example.month = 12;
    example.day = 6;
    example.year = 2021;
    example.day_of_week = "Monday";

    printDate(&example);
    return 0;
}

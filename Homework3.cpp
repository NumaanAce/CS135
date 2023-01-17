// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu
// HW 3 - E3.1

#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Please enter an integer: ";
    // while (cin >> num){
    cin >> num; // Storing input into num variable.
    if (num < 0)
        cout << "Your number is negative." << endl; // If the integer is less than 0, or negative, console will output the number is negative.
    else if (num > 0)
        cout << "Your number is positive." << endl; // If the number is greater than 0, or positive, console will output the number is positive.
    else
        cout << "Your number is zero." << endl; // If integer is not greater or less than 0, meaning it is 0, console will output the number is zero.
    return 0;
}
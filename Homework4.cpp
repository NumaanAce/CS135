// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu
// HW 4 - E3.5

#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter 3 integers";
    cin >> num1 >> num2 >> num3;

    if ((num1 < num2) && (num2 < num3))
        cout << "increasing" << endl;
    else if ((num1 > num2) && (num2 > num3))
        cout << "decreasing" << endl;
    else
        cout << "neither" << endl;
    return 0;
}
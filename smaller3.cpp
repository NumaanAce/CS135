// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

/* This program allows the user to enter three numbers, 
and then evaluates which of the three entered numbers
is lesser than the others. The numbers are stored 
into variables and are evaluated using 
an if statement and the logical operator "<".
0 is returned to show program success.
*/

int main(){
    cout << "Enter the first number:";
    int firstNum, secNum, thirdNum;
    cin >> firstNum;
    cout << "Enter the second number:";
    cin >> secNum;
    cout << "Enter the third number:";
    cin >> thirdNum;

    if (firstNum < secNum and firstNum < thirdNum){
        cout << "The smaller of the three is " << firstNum;
    }
    else if (secNum < firstNum and secNum < thirdNum){
        cout << "The smaller of the three is " << secNum;
    }
    else if (thirdNum < firstNum and thirdNum < secNum){
        cout << "The smaller of the three is " << thirdNum;
    }

    return 0;
}   
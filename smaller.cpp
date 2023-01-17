// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;


/* This program allows the user to enter two numbers, 
and then evaluates which of the two entered numbers
is lesser than the other. The numbers are stored 
into variables and are evaluated using 
an if statement and the logical operator "<".
0 is returned to show program success.
*/
int main(){
    cout << "Enter the first number:";
    int firstNum, secNum;
    cin >> firstNum;
    cout << "Enter the second number:";
    cin >> secNum;

    if (firstNum < secNum){
        cout << "The smaller of the two is " << firstNum;
    }
        if (firstNum > secNum){
        cout << "The smaller of the two is " << secNum;
    }

    return 0;
}   
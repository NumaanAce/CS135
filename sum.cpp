// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){
    int sum = 0; // Initializing "sum" variable to be 0.
    int value; // Initializing value variable.
    while (cin >> value){ // While loop for continuous input from file to value variable
        sum += value; // As the while loop continues, the sum concatenates current value with next value in file.
    }
    cout << sum << endl; // The final sum is printed.
    return 0;
}
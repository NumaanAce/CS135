// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){
    string test; // Empty string
    cout << "Enter a line of text: ";
    getline(cin, test); // string now contains whole line
    cout << endl;
    int test_length = test.length(); // length variable
    for (int i = 0; i < test_length; i++){ // for loop that tests every character until end of string
        cout << test[i] << " " << int(char(test[i])) << endl; // Prints out the character at i, and the ascii number.
    }
    return 0;
}
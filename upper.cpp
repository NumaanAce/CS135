// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){
    int length; // Making length variable
    cout << "Please enter shape length: ";
    cin >> length; // Length input
    cout << endl;

    for (int row = 0; row < length; row++){ // Outer loop
        for (int col = 0; col < length; col++){ // Inner loop    
            if (col >= row) // If col is greater than or equal to row, print asterisk. This makes it so that after every row increment, there can be a space beginning.
                cout << "*";
            else
                cout << " "; // Else, print a space.
        }
        cout << endl; // New line after every inner loop
    }
    return 0;
}
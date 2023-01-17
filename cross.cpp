// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){
    int d; // Initializing diagonal variable.
    cin >> d; // Diagonal input
    // int d_store = d;

    for (int j = 0; j < d; j++){ // Outer loop
        for (int i = 0; i < d; i++){ // Inner loop
            if (i == j || i+j == d-1) // If inner = outer, then print out an asterisk. OR if inner + outer = diagonal - 1, print an asterisk.
                cout << "*";
            else
                cout << " "; // Else, print a space.
        }
        cout << endl; // New line after every inner loop.
    }
    return 0;
}
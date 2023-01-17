// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){

    int h, w; // Initializing height and width variables.
    cin >> w; // Width Input
    cin >> h; // Height Input

    for (int row = 0; row < h; row++){ // Outer loop
        for (int col = 0; col < w; col++){ // Inner Loop 
            if ((row / 3 + col / 3) % 2 == 0) // If both row and col are even at the same time, print asterisk
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n"; // new line to seperate lines.
        
    }
    return 0;
}
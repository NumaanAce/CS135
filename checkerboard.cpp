// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){

    int h, w; // Initializing height and width variables.
    cin >> w; // Width Input
    cin >> h; // Height Input
    string asterisk = ""; // Intializing empty asterisk string.

    for (int j = 0; j < h; j++){
        for (int i = 0; i < w; i++){ // Loop that adds an asterisk to "asterisk" string variable until width is reached.
            if ((j % 2) == 0) // If j is an even row
                if ((i % 2) == 0) // If i is an even column
                    cout << "*"; // Print Asterisk
                else
                    cout << " "; // If i is not an even column, print space.
            else // If j is not an even row
                if ((i % 2) == 0) // If i is an even column
                    cout << " "; // print space
                else
                    cout << "*"; // If i is not an even column, print asterisk.
        }
        cout << "\n"; // new line to seperate lines.
        
    }
    return 0;
}
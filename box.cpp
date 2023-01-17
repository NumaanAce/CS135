// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){

    int h, w; // Initializing height and width variables.
    cin >> w; // Width Input
    cin >> h; // Height Input
    string asterisk = ""; // Intializing empty asterisk string.

    for (int i = 0; i < w; i++){ // Loop that adds an asterisk to "asterisk" string variable until width is reached.
        asterisk += '*';
    }
    for (int j = 0; j < h; j++){ // Loop that prints variable asterisk until height is reached.
        cout << asterisk << endl;
    }
    return 0;
}
// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){
    int width, height; // Making width and height variables


    cout << "Please enter shape width: "; 
    cin >> width; // Width input
    cout << "Please enter shape height: ";
    cin >> height; // Height input
    cout << endl;

    int stars = width; // Declaring values of spaces and stars variables.
    int spaces = 0;
    if (width - height < width/2){ // If height is too arbitrarily large, output impossible
        cout << "Impossible shape." << endl;
    }
    else{
        for (int row = 0; row < height; row++){ // Outer loop
            
            for (int col = 0; col < spaces; col++){ // Inner loop 
                cout << " ";
            }
            for (int col = 0; col < stars; col++){ // Inner loop 
                cout << "*";
            }
        cout << endl;
        spaces += 1; // After all char's are placed, add 1 to spaces so that one more space is placed at the beginning
        stars -= 2; // After all char's placed, add 2 to stars to 2 less stars will be placed in total.
        }
    }
    return 0;
}
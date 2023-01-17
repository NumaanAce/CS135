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
        for (int col = 0; col < row + 1; col++) // Inner loop
        {
            cout << "*"; // Continues printing asterisks until col < row + 1;
        }
        cout << endl; // New line for every end of inner loop
    }
    return 0;
}
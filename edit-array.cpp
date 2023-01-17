// Name: Numaan Qureshi
// Email: numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){
    int myData[10], i, v; // Initializing array, index, and value variables.
    for (int j = 0; j < 10; j++){ // For loop that sets all values in array to 1.
        myData[j] = 1;
    }
    do { // Do statement that continues as long as input is greater than/equal to 0 and less than 10.
        for (int a = 0; a < 10; a++){
        cout << myData[a] << " "; // Prints out the array.
        }
        cout << endl;
        cout << "Please enter an index: ";
        cin >> i; // Storing index.
        cout << "Please enter a value: ";
        cin >> v; // Storing value.
        if ((i >= 0) && (i < 10)){ // If statement that changes value at index, only if index is less than 10 and greater than/equal to 0.
            myData[i] = v;
        }
    }
    while ((i >= 0) && (i < 10)); // While loop that works with do statement.
    cout << "Index out of range. Exit."; // If an index out of range is entered, program exits.
    return 0;
}
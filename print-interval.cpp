// Name: Numaan Qureshi
// Email: numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){
    int lower, upper; // Initializing variables
    cout << "Please enter a lower limit: ";
    cin >> lower; // Storing lower limit
    cout << "Please enter an upper limit: ";
    cin >> upper; // Storing upper limit

    for (int i = lower; i < upper; i++){ // For loop that continues from lower limit and stops 1 before upper limit. Increment of 1.
        cout << i << " "; // Prints each integer between lower and upper followed by a space.
    }
    return 0;
}
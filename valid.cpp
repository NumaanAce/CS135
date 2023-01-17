// Name: Numaan Qureshi
// Email: numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;


int main(){
    int integer, integerSquared; // Intializing variables
    cout << "Please enter an integer between 0 and 100: ";
    cin >> integer; // Inputting into integer variable.
    while ((integer <= 0) || (integer >= 100)){ // While loop that continues if integer is less than/equal to 0 or greater than/equal to 100.
        cout << "Please reenter an integer between 0 and 100: ";
        cin >> integer;
    }
    integerSquared = integer * integer; // Evaluating integer squared into integerSquared.
    cout << "Your number squared is: " << integerSquared << endl; // Outputting integerSquared.
    return 0;
}
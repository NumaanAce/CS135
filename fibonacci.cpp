// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){
    int fib[59];
    fib[0] = 0; // First term in sequence
    fib[1] = 1; // Second term in sequency
    cout << fib[0] << endl;
    cout << fib[1] << endl;
    for(int i = 2; i < 60; i++){ // For loop to find terms from F(0) to F(59)
        fib[i] = fib[i-1] + fib[i-2]; // Fibonacci rules
        cout << fib[i] << endl; // Output for each term
    }
}
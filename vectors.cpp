// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n){ // Vector Making Function
    vector<int> vec; // Initializing the returned vector
    if (n > 0){ // If the value is positive
        for (int i = 0; i < n; i++){ // Loop through 0 through given value
            vec.push_back(i); // Add each value to the vector in order
        }
        return vec; // return vector
    }
    else
        return vec; // else, return empty vector.
}

int main(){

    return 0;
}
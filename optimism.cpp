// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
#include <vector>
using namespace std;

vector<int> goodVibes(const vector<int> v){ // Positive Number keeping function
    vector<int> positiveNums; // Initializing returned vector
    for (int i = 0; i < v.size(); i++){ // Loop that continues for the size of the vector
        if(v[i] > 0) 
            positiveNums.push_back(v[i]); // If the number is positive, add it to returned vector
    }
    return positiveNums; // Returned vector
}

int main(){

    return 0;
}
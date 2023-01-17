// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
#include <vector>
using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta){ // Append Function
    for (int i = 0; i < vegeta.size(); i++){ // Loops through all of second vector's values
        goku.push_back(vegeta[i]); // Adds each of the values to the first vector
    }
    vegeta.clear(); // Clears the second vector.
}

int main(){

    return 0;
}

//Comment
//Comment
//Comment
//Comment
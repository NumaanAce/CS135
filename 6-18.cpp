// Name: Numaan Qureshi
// Course: CS135, Tong Yi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
#include <vector>
using namespace std;

vector<int> append(vector<int> a, vector<int> b){
    vector<int> v; // returned vector
    for (int i = 0; i < a.size(); i++){ // loops through all elements in first vector and adds to returned vector
        v.push_back(a[i]);
    }
    for (int j = 0; j < b.size(); j++){ // loops through all elements in second vector and adds to returned vector
        v.push_back(b[j]);
    }
    return v; // vector is returned
}

int main(){

    return 0;
}
// Name: Numaan Qureshi
// Course: CS135, Tong Yi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
#include <vector>
using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b){
    vector<int> v;
    int i = 0, j = 0, k = 0;
    int n1 = a.size();
    int n2 = b.size();
    // Traverse both array
    while (i < n1 && j < n2) {
        if (a[i] < b[j])
            v.push_back(a[i++]);
        else
            v.push_back(b[j++]);
    }

    // Store remaining elements of first array
    while (i < n1)
        v.push_back(a[i++]);
    // Store remaining elements of second array
    while (j < n2)
        v.push_back(b[j++]);

    return v;
}

int main(){
    

    return 0;
}
// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

//Comment
//Comment
//Comment
//Comment
//Comment


#include <iostream>
#include <vector>
using namespace std;

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2) {
    vector<int> v;
    int i = 0, sum = 0;
    while (i < v1.size() || i < v2.size()) {
        sum = 0;
        if (i < v1.size())
            sum += v1[i];
        if (i < v2.size())
            sum += v2[i];
        v.push_back(sum);
        i++;
    }
    return v;
}

int main(){

    return 0;
}
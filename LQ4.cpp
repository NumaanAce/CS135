// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){
    
    int test[10];
    for (int i = 1; i < 11; i++)
    {
        test[i-1] = i;
        cout << test[i-1] << endl;
    }

    return 0;
}
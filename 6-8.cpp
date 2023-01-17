// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size)
{
    if (a_size == b_size){ // if sizes are equal
        for (int i = 0; i < a_size; i++){ // for loop that tests all elements
            if (a[i] != b[i]) // if any elements at the point dont match, return false
                return false;
        }
        return true; // return true if no unmatching elements found
    }
    else
        return false; // return false if sizes are not same.

}


int main(){
    int test_size = 5;
    int test[test_size] = {78, 4, 13, 22, 35};
    int test2_size = 4;
    int test2[test_size] = {78, 4, 13, 22};
    cout << equals(test, test_size, test2, test2_size) << endl;
    return 0;
}
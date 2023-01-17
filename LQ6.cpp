// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main(){
    
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (j%2 == 0)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}

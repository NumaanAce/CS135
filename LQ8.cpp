// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

void remove_e(string & sentence)
{
    string newString = "";
    for(int i = 0; i < sentence.length(); i++)
        if (sentence[i] != 'e')
            newString += sentence[i];
        sentence = newString;
}

int main(){

    return 0;
}
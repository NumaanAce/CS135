// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

char shiftChar(char c, int rshift)
{
    char newChar;
    if ((c >= 'a') && (c <= 'z'))
    {
        int offset = (c - 97) + rshift;
        if (offset > 25)
            offset = offset % 26;
        newChar = 97 + offset;
    }
    else if ((c >= 'A') && (c <= 'Z'))
    {
        int offset = (c - 65) + rshift;
        if (offset > 25)
            offset = offset % 26;
        newChar = 65 + offset;
    }
    else
        newChar = (c);

    return newChar;
}

int main(){
    cout << shiftChar('B', 25) << endl;
    cout << int(shiftChar('a', 5)) << endl;
    return 0;
}
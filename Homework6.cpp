// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu
// HW 6 - E5.6

#include <iostream>
using namespace std;

string middle(string str)
{
    string middleString = "";
    
    if ((str.length() % 2) == 0){ // Anything even is divisible by 2, meaning there will be a remainder of 0. Else its odd.
        middleString += str[str.length() / 2 - 1]; // bc index starts at 0
        middleString += str[str.length() / 2];
    }
    else
        middleString = str[int(str.length() / 2)];

    return middleString;
}

int main()
{
    string text;
    cout << "Enter a word: ";
    getline(cin, text);
    string result = middle(text);
    cout << result << endl;
    return 0;
}

/* Extra Ideas: 
- Instead of using mod could have used float truth. Like if something divided by 2
gave a floating/double number, then it is confirmed odd.
- Could have given str.length a variable, maybe even str.length() / 2 a variable.
- Was it necessary to make middleString empty? I think so.
*/
// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

char shiftChar(char c, int rshift)
{
    char newChar;
    if ((c >= 'a') && (c <= 'z')) // If letter is lowercase
    {
        int offset = (c - 'a') + rshift; // Make the shift take in account the starting position. So if its a shift of 5, and starting from c, you need to move 7 characters from A.
        if (offset > 25) // If shift is greater than 25, loop around by using mod. IE B shifted by 25 would give '[', but we make it loop around so instead gives 'A'.
            offset = offset % 26;
        newChar = 'a' + offset; // char variable stores the shifted letter.
    }
    else if ((c >= 'A') && (c <= 'Z')) // If letter is capital
    {
        int offset = (c - 'A') + rshift;
        if (offset > 25)
            offset = offset % 26;
        newChar = 'A' + offset;
    }
    else
        newChar = c;

    return newChar;
}

string encryptCaesar(string plainText, int rshift)
{
    string caesarText = "";
    for (int i = 0; i < plainText.length(); i++){ // For loop that goes through entered string.
        caesarText += shiftChar(plainText[i], rshift); // Adds shifted letters to empty string and new shifted text is returned.
    }
    return caesarText;
}
int main(){
    string plainText;
    int rshift; 
    cout << "Enter a line of anything: ";
    getline(cin, plainText); // Obtains line of text.
    cout << "Enter how many characters you'd like to shift to the right by: ";
    cin >> rshift; // Obtains shift amount
    string codedText = encryptCaesar(plainText, rshift); // Adds all shifted letters to empty string
    cout << "Your encoded text is: " << codedText << endl; // Prints shifted letters.

    return 0;
}
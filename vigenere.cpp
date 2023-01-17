// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

string encryptVigenere(string plaintext, string keyword)
{
    int i, shift, a = 0; // intiializing variables. Must define a = 0 here so shift will ignore spaces.
    string encrypted = ""; // Empty string for shifted characters to be placed.
    for (i = 0; i < plaintext.length(); i++) // Loop that continues until length of text is reached.
    {
        char current = plaintext[i];
        shift = keyword[a % keyword.length()] - 'a';
        if ((current >= 'A') && (current <= 'Z')) // Loop only catches letters, no other characters.
        {
            int offset = (current - 'A') + shift;
            if (offset > 25)
                offset %= 25;
            encrypted += ('A' + offset)
            a++;
        else if ((current >= 'a') && (current <= 'z'))
        {

        }
        else
            encrypted += current;
    }   
    return encrypted;
}

int main(){
    string text, keyword;
    cout << "Enter some text: ";
    getline(cin, text);
    cout << "Enter a keyword: ";
    cin >> keyword;
    cout << "Your encrypted text is: " << encryptVigenere(text, keyword) << endl; // Output's encrypted message.
    return 0;
}
// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line) // Function that removes leading spaces.
{
    string unindented = ""; // Sets up returned string.
    int j = 0; // Initializing loop variable.
    while (isspace(line[j])) // Loop continues as long as the char in line at j index is a space.
    {
        j++; // Increments latter loop variable.
    }
    for (j; j < line.length(); j++) // Sets up foor loop.
    {
        unindented += line[j]; // Adds every character after the leading spaces to the returned string.
    }

    return unindented;
}

int countChar(string line, char c)
{
    
}

int main(){
    string bad_code;
    while (getline(cin, bad_code)) // Continues for each line in the input redirection.
    {
        cout << removeLeadingSpaces(bad_code) << endl; // Outputs each unindented line.
    }

    return 0;
}
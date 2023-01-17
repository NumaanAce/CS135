// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int countChar(string line, char c)
{
    int counter = 0;
    for (int a = 0; a < line.length(); a++)
        {
            if (line[a] == c)
                counter++;
        }
    
    return counter;
}

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

int main(){
    string bad_code;
    int tracker = 0;
    while (getline(cin, bad_code)) // Continues for each line in the input redirection.
    {
        bad_code = removeLeadingSpaces(bad_code);
        string outstring = ""; // Initial string
        if (bad_code[0] == '}') // If the first character is a right bracket, subtract the tracker by 1 to have correct indentation.
        {
            tracker--;

            for (int j = 0; j < tracker; j++) // For all the tracked brackets, add an indent to the string.
                {
                    outstring += '\t';
                }

            for (int n = 0; n < countChar(bad_code, '{'); n++) // If there is a left bracket found in the pulled string, add 1 to the indent tracker.
                tracker++;
            
            for (int y = 0; y < countChar(bad_code, '}') - 1; y++) // If there is a right bracket found in the pulled string, subtract 1 from the indent tracker.
                tracker--;
        }
        else
        {
            for (int j = 0; j < tracker; j++) // For all the tracked brackets, add an indent to the string.
                {
                    outstring += '\t';
                }

            for (int n = 0; n < countChar(bad_code, '{'); n++) // If there is a left bracket found in the pulled string, add 1 to the indent tracker.
                tracker++;

            for (int y = 0; y < countChar(bad_code, '}'); y++) // If there is a right bracket found in the pulled string, subtract 1 from the indent tracker.
                tracker--;
        }

        for (int p = 0; p < bad_code.length(); p++) // Add each character from the pulled string to the output string.
        {
            outstring += bad_code[p];
        }
        
        cout << outstring << endl; // Output the final string.
    }
    
    return 0;
}
// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu
// HW 5 - E4.8

#include <iostream>
using namespace std;

int main(){

    string entry;
    cout << "Enter a word: ";
    getline(cin, entry);

    for (int i = 0; i < entry.length(); i++)
        cout << entry[i] << endl;

    return 0;
}
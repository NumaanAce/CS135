// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
using namespace std;

int main(){
    ifstream fin("Current_Reservoir_Levels.tsv");
    string date;
    double eastMin = 100000000000000.00;
    double eastMax = 0;
    // cout << "Please enter a date in the format MM/DD/YYY: ";
    // cin >> dateInput;
    double eastSt, eastEl, westSt, westEl;
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}

    string junk;        // new string variable
    getline(fin, junk); // read one line from the file

while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 
    if (eastSt > eastMax)
        eastMax = eastSt;
    else if (eastSt < eastMin)
        eastMin = eastSt;

}
    cout << "Minimum storage in East basin: " << eastMin << endl;
    cout << "Maximum storage in East basin: " << eastMax << endl;
    fin.close();
    return 0;
}
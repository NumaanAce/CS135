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
    string startDate;
    string endDate;
    cout << "Please enter the starting date in the format MM/DD/YYY: ";
    cin >> startDate;
    cout << "Please enter the ending date in the format MM/DD/YYY: ";
    cin >> endDate;
    string higherElevation;
    double eastSt, eastEl, westSt, westEl;
    int index = 0;
    string dateArray[400];
    double westElArray[400];
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

        if (startDate <= date || date >= endDate){ // Starts adding to array when date is equal to start date, and continues while start date is less than date and date is greater than end date.
            dateArray[index] = date;
            westElArray[index] = westEl;
            index++;
        }
        if (date >= endDate)
            break;
        
    }
    for (int i = index - 1; i >= 0; i--){
        cout << dateArray[i] << " " << westElArray[i] << " ft" << endl;
    }
    fin.close();
    return 0;
}
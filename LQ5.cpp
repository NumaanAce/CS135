// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream read("data.txt");
    string outputData;
    while (getline(read, outputData))
    {
        cout << outputData << endl;
    }
    read.close();

    return 0;
}
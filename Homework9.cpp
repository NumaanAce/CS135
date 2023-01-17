// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
#include <fstream>
using namespace std;


int main(){
    ofstream out_file("hello.txt");
    out_file << "Hello, World!"; // writing "Hello, World!" into hello.txt
    out_file.close(); // closing stream
    ifstream in_file("hello.txt"); // reopen hello.txt
    string hello; // create hello string
    getline(in_file, hello); // read out_file into hello
    cout << hello; // print hello
    return 0;
}
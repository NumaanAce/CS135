// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

class Customer{
private:
    string name;
    string unique_id;
public:
    Customer(string n, string id);  
    Customer();
    string get_name();
    string get_unique_id();
    void set_name(string newName);
    void set_unique_id(string newID);
};

Customer::Customer(string n, string id){
    name = n;
    unique_id = id;
}

Customer::Customer(){
    name = "";
    unique_id = "";
}

string Customer::get_name(){
    return name;
}

string Customer::get_unique_id(){
    return unique_id;
}

void Customer::set_name(string newName){
    int testName = 0;
    for (int i = 0; i < newName.length(); i++){
        if ((newName[i] >= 'A' && newName[i] <= 'Z') || (newName[i] >= 'a' && newName[i] <= 'z'))
            testName = testName;
        else
            testName++;
    }
    if (testName > 0)
        name = "";
    else
        name = newName;
}

void Customer::set_unique_id(string newID){
    int testID = 0;
    for (int i = 0; i < newID.length(); i++){
        if ((newID[i] > 'A' && newID[i] < 'Z') || (newID[i] > 'a' && newID[i] < 'z'))
            testID = testID;
        else
            testID++;
    }
    if (testID > 0)
        unique_id = "";
    else
        unique_id = newID;
}

int main(){
    // Customer test;
    // string name, id;
    // name = "Numaan";
    // id = "Five";

    // test.set_name(name);
    // test.set_unique_id(id);
    // cout << test.get_name() << endl;
    // cout << test.get_unique_id() << endl;
    
    // return 0;
}
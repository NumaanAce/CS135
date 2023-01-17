// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

class Profile {
private:
    string username;    
    string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

Profile::Profile(){
    username = "";
    displayname = "";
}

Profile::Profile(string usrn, string dspn){ // Defining Profile Constructor function
    username = usrn;
    displayname = dspn;
}

string Profile::getUsername(){ // Defining getUsername func
    return username;
}

string Profile::getFullName(){ // Defining getFullName func
    string fullname = displayname + ' ' + "(@" + username + ')';
    return fullname;
}

void Profile::setDisplayName(string dspn){ // Defining setDisplayName func
    displayname = dspn;
}

class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array:
                                   // mapping integer ID -> Profile

  // Returns user ID (index in the 'profiles' array) by their username
  // (or -1 if username is not found)
  int findID (string usrn);
  bool following[MAX_USERS][MAX_USERS];  // friendship matrix:
 // following[id1][id2] == true when id1 is following id2
public:
  // Constructor, makes an empty network (numUsers = 0)
  Network();
  // Attempts to sign up a new user with specified username and displayname
  // return true if the operation was successful, otherwise return false
  bool addUser(string usrn, string dspn);
  // Make 'usrn1' follow 'usrn2' (if both usernames are in the network).
 // return true if success (if both usernames exist), otherwise return false
 bool follow(string usrn1, string usrn2);

 // Print Dot file (graphical representation of the network)
 void printDot();
};

Network::Network(){
    numUsers = 0;
    for (int p = 0; p < MAX_USERS; p++){
        for (int m = 0; m < MAX_USERS; m++){
            following[p][m] == false;
        }
    }
}

int Network::findID(string usrn){
    for (int i = 0; i < numUsers; i++){
        if (profiles[i].getUsername() == usrn)
            return i;
    }
    return -1;
}

bool Network::addUser(string usrn, string dspn){
    if (numUsers < MAX_USERS)
    {
        for (int l = 0; l < usrn.length(); l++){
            if (!((usrn[l] >= 'A' && usrn[l] <= 'Z') || (usrn[l] >= 'a' && usrn[l] <= 'z') || (usrn[l] >= '0' && usrn[l] <= '9')))
                return false;
        }
        for (int j = 0; j < numUsers; j++){
            if (profiles[j].getUsername() == usrn)
                return false;
        }
        profiles[numUsers] = Profile(usrn, dspn);
        numUsers++;
        return true;
    }
    else
        return false;
}

bool Network::follow(string usrn1, string usrn2)
{
    int element1 = findID(usrn1); //Element in profiles array is the same row & column in friendship matrix
    int element2 = findID(usrn2);
    if (((element1 == -1) || (element2 == -1)) || (element1 == element2)) //If the usernames are not found in profile array
    {
        return false;
    }

    following[element1][element2] = true;
    return true;
}

void Network::printDot()
{
    cout << "digraph {" << endl;
    for (int i = 0; i < numUsers; i++) //Iterating in users through profiles array
    {
        cout << " " << "\"@" << profiles[i].getUsername() << "\"" << endl;
    }
    //Network following
    for (int i = 0; i < numUsers; i++) //Matrix requires nested loop
    {
        for (int j = 0; j < numUsers; j++)
        {
            if (following[i][j] == true)
            {
                cout << " " << "\"@" << profiles[i].getUsername() << "\" -> \"@" << profiles[j].getUsername() << "\"" << endl;
            }
        }
    }
    cout << "}" << endl;
}


int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}
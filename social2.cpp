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

class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array:
                                   // mapping integer ID -> Profile

  // Returns user ID (index in the 'profiles' array) by their username
  // (or -1 if username is not found)
  int findID (string usrn);
public:
  // Constructor, makes an empty network (numUsers = 0)
  Network();
  // Attempts to sign up a new user with specified username and displayname
  // return true if the operation was successful, otherwise return false
  bool addUser(string usrn, string dspn);
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

Network::Network(){
    numUsers = 0;
}

int Network::findID(string usrn){
    int result = -1;
    for (int i = 0; i < numUsers; i++){
        if (profiles[i].getUsername() == usrn)
            result = i;
    }
    return result;
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

int main() {
  Network nw;
  cout << nw.addUser("mario", "Mario") << endl;     // true (1)
  cout << nw.addUser("luigi", "Luigi") << endl;     // true (1)

  cout << nw.addUser("mario", "Mario2") << endl;    // false (0)
  cout << nw.addUser("mario 2", "Mario2") << endl;  // false (0)
  cout << nw.addUser("mario-2", "Mario2") << endl;  // false (0)

  for(int i = 2; i < 20; i++)
      cout << nw.addUser("mario" + to_string(i), 
                 "Mario" + to_string(i)) << endl;   // true (1)

  cout << nw.addUser("yoshi", "Yoshi") << endl;     // false (0)
}
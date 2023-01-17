// Name: Numaan Qureshi
// Course: CS135, Tong Yi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

void printRange(int left, int right){ // func
    if (right >= left) // If right limit is greater than left
    {
        cout << left << " "; // print left limit
        left++; // increment left limit
        printRange(left, right); // recursion function
    }
}

int sumRange(int left, int right){
   if(left > right){
      return 0;
   }
   else{
      return left + sumRange(left + 1, right);
   }
}

int sumArray(int *arr, int size){
    if (size > 0)
    {
        return arr[size-1] + sumArray(arr, size-1);
    }
    else{
        return 0;
    }
}

bool isAlphanumeric(string s){
    int lastChar = s.size() - 1;
    if (s.size() > 0)
    {
        if((s[lastChar] >= 'A' && s[lastChar] <= 'Z') || (s[lastChar] >= 'a' && s[lastChar] <= 'z') || (s[lastChar] >= '0' && s[lastChar] <= '9'))
        {
            s.erase(lastChar);
            return isAlphanumeric(s);
        }
        else
            return false;
    }
    else
        return true;
}

bool nestedParens(string s){
    int lastChar = s.size() - 1;
    
    if (s.size() > 0)
    {
        if ((s[0] == '(') && (s[lastChar] == ')'))
        {
            s.erase(s.begin());
            s.erase(s.end()-1);
            return nestedParens(s);
        }
        else
            return false;
    }
    else
        return true;
}   

bool divisible(int *prices, int size){
    
}

int main()
{

}

//Comment
//Comment
//Comment
//Comment
//Comment
//Comment
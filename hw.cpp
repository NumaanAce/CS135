// Name: Numaan Qureshi
// Email: numaan.qureshi58@myhunter.cuny.edu

#include <iostream>

using namespace std;

//the function to sort two double type values using pointer
void sort2(double*p, double*q)
{
//variable declaration
double temp;
  
//swap the values
if(*p>*q)
{
temp = *p;
*p = *q;
*q = temp;
}
}

int main()
{
//variable declaration and initialization
double x = 20;
double y = 10;
  
//function calling
sort2(&x,&y);
  
//display the values
cout<<"x = "<<x<<endl<<"y = "<<y;

return 0;
}

// Comment
// Comment
// Comment
// Comment
// Comment
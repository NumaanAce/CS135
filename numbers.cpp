// Name: Numaan Qureshi
// Course: CS135
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d){ // Divisible function
    if (d == 0) // If n MOD d is 0, then func is true.
        return false;
    else if (n % d == 0)
        return true;
    else
        return false;
}

bool isPrime(int j) // Prime function
{ 
    if (j <= 1) // If n is 0 or 1, it is not prime.
        return false;

    if (j == 2 || j == 3)
        return true;

    for (int i = 2; i < j; i++)
    {
        if (j % i == 0)
            return false;
    }

    return true;
}

bool isTwinPrime(int k) // Twin Prime function
{
    if (isPrime(k))
    {
        if ((isPrime(k + 2)) || (isPrime(k - 2))) // Tests the numbers 2 behind and 2 forward to see if they are prime.
            return true;
        else
            return false;
    }
    else
        return false;
}

int nextPrime(int x) // Next Prime function
{
    int storage; // Stores next prime.
    bool checker = false; // Holds the loop until a prime number is found.
    while (!checker)
    {
        x++; // constant increment of 1 to x.
        if (isPrime(x)) // Checks if x is prime.
        {
            checker = true; // Stops loop if x is prime.
            storage = x; // Next prime is stored.
        }
    }
    return storage;
}

int countPrimes(int a, int b)
{
    int counter = 0; // Initialized counter at 0.
    for (int i = a; i <= b; i++){ // Loop that starts from first input and ends at second input. Increment of 1.
        if (isPrime(i)) // If i is prime, increment counter by 1.
            counter++;
    }
    return counter;
}

int nextTwinPrime(int n)
{
    int storage;
    bool checker = false;
    while (!checker)
    {
        n++;
        if (isTwinPrime(n))
        {
            checker = true;
            storage = n;
        }
    }
    return storage;
}

int largestTwinPrime(int a, int b)
{
    int large = 0;
    for (int i = b; i >= a; i--)
    {
        if (isTwinPrime(i)){
            large = i;
            i = a - 1;
        }
    }
    if (large == 0)
        return -1;
    else
        return large;
}

int main(){
    int num1, num2; // Input variables.
    cout << "Please enter two numbers: ";
    cin >> num1 >> num2;
    largestTwinPrime(num1, num2);
    cout << largestTwinPrime(num1, num2) << " is the largest twin prime number between " << num1 << " and " << num2 << '.' << endl; // Output next twin prime.
    return 0;
}
// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu

#include <iostream>
using namespace std;

int main()
{
    char colon;
    int sum = 0; // Initializing sum variable to be 0.
    int num;
    char oper = '+'; // Initializing oper variable to be +
    while (cin >> num) // While inputs are successfully being input into num. Inputs num, and then cin >> oper inputs the operator every time.
    {
        if (oper == '+') // If the operator is plus, add the number to sum. In first instance, it makes sum first integer.
            sum += num;
        else if (oper == '-') // If the operator is minus, subtract the number from sum. For all instances after first.
                sum -= num;

        cin >> oper; // Input into operator. This happens after every number is input into num.
        if (oper == ';'){ // If the operator is a semi-colon, the current sum is output. Then, the sum is reset back to 0 and the operator is reset back to '+'.
            cout << sum << endl;
            sum = 0;
            oper = '+';
        }
    }
    return 0;
}
// Name: Numaan Qureshi
// Email : numaan.qureshi58@myhunter.cuny.edu
// HW 2 - E2.10

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float gallons, efficiency, price; // Initializing all three inputs
    cout << "Please enter the number of gallons of gas in the tank: ";
    cin >> gallons;
    cout << "Please enter the fuel efficiency in miles per gallon: ";
    cin >> efficiency;
    cout << "Please enter the price of gas per gallon: ";
    cin >> price;
    
    float hundredMileCost, distance; // Initializing the variables that will evaluate the math for each task
    cout << fixed << setprecision(2);
    hundredMileCost = (100 / efficiency) * price; // 100 divided by fuel efficiency will give the amount of gallons needed on the trip. Multiply by price to find total cost of 100 mile trip.
    distance = efficiency * gallons; // Distance is calculated by fuel efficiency multiplied by how many gallons are currently in the tank.

    cout << "The cost of gas per 100 miles is " << hundredMileCost << endl;
    cout << "The distance the car can go with current gas is " << distance << endl;

    return 0;
}
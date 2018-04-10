// Write a prgoram that prompts the user to enter the
// distance to drive, the fuel efficiency of the car
// in miles per gallon, and then displays the cost of the trip

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int distance;
    int fuelEfficiency;
    int pricePerGallon;
    int cost;
    
    cout << "Enter the distance of the trip" << endl;
    cin >> distance;
    cout << "Enter the price per gallon: " << endl;
    cin >> pricePerGallon;
    cout << "Enter the fuel efficiency: " << endl;
    cin >> fuelEfficiency;
    
    cost = distance / fuelEfficiency * pricePerGallon;
    
    cout << "The cost for the trip is: ";
    cout << cost << endl;
}

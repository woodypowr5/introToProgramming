// A shipping company uses the following function to calculate the cost(in dollars)
// of shipping based on the weight of the package(in pounds). Write a program that
// prompts the user to enter the weight of the package and display the shipping cost.
// If the weight is greater than 50, display a message “the package cannot be shipped.”

#include <iostream>;
using namespace std;

int main()
{
    double weight;
    
    cout << "Enter the weight of the package" << endl;
    cin >> weight;
    
    if (weight < 1) {
        cout << "The cost is 3.5" << endl;
    }
    else if (weight < 3){
        cout << "The cost is 5.5" << endl;
    }
    else if (weight < 10){
        cout << "The cost is 8.5" << endl;
    }
    else if (weight <= 20){
        cout << "The cost is 10.5" << endl;
    }
    else if (weight > 20){
        cout << "Package cannot be shipped" << endl;
    }
    else {
        cout << "Invalid weight" << endl;
    }
    
    return 0;
}

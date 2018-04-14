// Suppose you save $100 each month into a savings account
// with the annual interest rate 5%. Thus, the monthly
// interest rate is 0.05/12 = 0.00417.
// Write a program that prompts the user to enter a monthly
// saving amount and displays the account value after the sixth month.

#include <iostream>
using namespace std;

int main() {
    
    double monthlyAmount;
    double total = 0;
    const double INTEREST_RATE = 0.00417;
    
    cout << "Enter the amount saved each month: " << endl;
    cin >> monthlyAmount;
    
    // month 1
    total += monthlyAmount + (total * INTEREST_RATE);
    // month 2
    total += monthlyAmount + (total * INTEREST_RATE);
    // month 3
    total += monthlyAmount + (total * INTEREST_RATE);
    // month 4
    total += monthlyAmount + (total * INTEREST_RATE);
    // month 5
    total += monthlyAmount + (total * INTEREST_RATE);
    // month 6
    total += monthlyAmount + (total * INTEREST_RATE);
    
    cout << "The total after six months is $" << total << endl;
    
    return 0;
}

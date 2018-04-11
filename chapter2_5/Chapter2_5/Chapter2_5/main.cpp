// Write a program that reads the subtotal and the gratuity rate,
// then computes the gratuity and total. For example, if the user
// enters 10 for subtotal and 15% for gratuity rate, the program
// displays $1.5 as gratuity and $11.5 as total.

#include <iostream>;
using namespace std;

int main() {
    
    double subtotal;
    double gratuityRate;
    double gratuity;
    double total;
    
    cout << "Please enter the subtotal: " << endl;
    cin >> subtotal;
    cout << "Please enter the gratuity rate: " << endl;
    cin >> gratuityRate;
    
    gratuity = subtotal * gratuityRate;
    total = subtotal + gratuity;
    
    cout << "The total gratuity is " << gratuity << endl;
    cout << "The total amount due is " << total << endl;
    
    return 0;
}

// 3.1
// If the discriminant is positive, display
// two roots. If the discriminant is 0, display one root.
// Otherwise, display “The equation has no real roots.”

#include <iostream>;
#include <cmath>;
using namespace std;

int main()
{
    double a, b, c;
    double disc;
    double root;
    
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    
    disc = pow(b, 2) - (4 * a * c);
    
    if (disc == 0) {
        root = ((b*-1) + sqrt(disc)) / (2 * a);
        cout << "The root is " << root << endl;
    }
    else if (disc > 0){
        root = ((b * -1) + sqrt(disc)) / (2 * a);
        cout << "The roots are " << root;
        root = ((b * -1) - sqrt(disc)) / (2 * a);
        cout << " and " << root << endl;
    }
    else {
        cout << "no real roots." << endl;
    }
    
    return 0;
}

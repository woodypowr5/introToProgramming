// Write a program that prompts the user to enter the minutes
// (e.g., 1 billion), and displays the number of years and days
// for the minutes. For simplicity, assume a year has 365 days.

#include <iostream>;
using namespace std;

int main() {
    
    int minutes;
    int years;
    int days;
    const int DAYS_PER_YEAR = 365;
    const int MINUTES_PER_DAY = 1440;
    
    cout << "Please enter the number of minutes: ";
    cin >> minutes;
    
    days = minutes / MINUTES_PER_DAY;
    years = days / DAYS_PER_YEAR;
    days = days - (years * DAYS_PER_YEAR);
    
    cout    << minutes
            << " minutes is equivalent to approximately "
            << years
            << " years and "
            << days
            << " days."
            << endl;
    
    return 0;
}

// Write a program that accepts a length value and allows conversion between:
// • Feet to Meters
// • Meters to Feet.
// Display the result.

#include <iostream>
using namespace std;
int main()
{
    int value;
    double ft, m;
    cout << "1. Feet to Meters \n";
    cout << "2. Meters to Feet \n";
    cout << "Choose a number: ";
    cin >> value;
    switch (value)
    {
    case 1:
        cout << "Enter the length in feet: ";
        cin >> ft;
        m = ft * 0.3048;
        cout << "Conversion of " << ft << " feet into meter: " << m << " m";
        break;

    case 2:
        cout << "Enter the length in meters: ";
        cin >> m;
        ft = m / 0.3048;
        cout << "Conversion of " << m << " meters into 1feet: " << ft << " ft";
        break;

    default:
        break;
    }
    return 0;
}
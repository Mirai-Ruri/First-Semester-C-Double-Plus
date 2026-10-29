// Write a program that accepts a unit type (length or weight) and performs the appropriate conversion. User can choose which unit to calculate.
// • Length: Feet to Meters
// • Weight: Pound to Kilogram

#include <iostream>
using namespace std;
void length()
{
    double ft, m;
    cout << "Enter the length in feet: ";
    cin >> ft;
    m = ft * 0.3048;
    cout << "Conversion of " << ft << " feet into meter: " << m << " m";
}
void weight()
{
    double lb, kg;
    cout << "Enter the weight in pounds: ";
    cin >> lb;
    kg = lb / 2.2;
    cout << "Conversion of " << lb << " pounds into kilogram: " << kg << " kg";
}
int main()
{
    int value;
    cout << "1. Length: Feet to Meters" << endl;
    cout << "2. Weight: Pound to Kilogram" << endl;
    cout << "Enter a number: ";
    cin >> value;
    switch (value)
    {
    case 1:
        length();
        break;
    case 2:
        weight();
        break;

    default:
        break;
    }
    return 0;
}
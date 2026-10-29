// Write a program that converts temperature:
// • Celsius to Fahrenheit
// • Fahrenheit to Celsius

#include <iostream>
using namespace std;
int main()
{
    double c, f;
    int value;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter a number: ";
    cin >> value;
    switch (value)
    {
    case 1:
        cout << "Enter temperature in Celsius: ";
        cin >> c;
        f = (1.8 * c) + 32;
        cout << "Conversion of " << c << " Celsius to Fahrenheit: " << f << " Fahrenheit";
        break;

    case 2:
        cout << "Enter temperature in Fahrenheit: ";
        cin >> f;
        c = (f - 32) * 0.556;
        cout << "Conversion of " << f << " Fahrenheit to Celsius: " << c << " Celsius";
        break;

    default:
        break;
    }
    return 0;
}
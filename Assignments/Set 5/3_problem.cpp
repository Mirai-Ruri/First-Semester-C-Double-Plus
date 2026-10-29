// Write a program that accepts a weight and allows the user to choose:
// • Pound to Kilogram
// • Kilogram to Pound.
// Display the converted result based on the user’s choice.

#include <iostream>
using namespace std;
int main()
{
    int value;
    double lb, kg;
    cout << "1. Pound to Kilogram \n";
    cout << "2. Kilogram to Pound \n";
    cout << "Choose a number: ";
    cin >> value;
    switch (value)
    {
    case 1:
        cout << "Enter the weight in pounds: ";
        cin >> lb;
        kg = lb / 2.2;
        cout << "Conversion of " << lb << " pounds into kilograms: " << kg << " kg";
        break;

    case 2:
        cout << "Enter the weight in kilogram: ";
        cin >> kg;
        lb = kg * 2.2;
        cout << "Conversion of " << kg << " kilograms into pounds: " << lb << " lb";
        break;

    default:
        break;
    }
    return 0;
}
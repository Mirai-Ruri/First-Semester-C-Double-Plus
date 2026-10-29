// Write a program that accepts a weight in pounds and converts it into kilograms. 
// Display both the original value and the converted value.
// 1 kg = 1 lb * 2.2

#include <iostream>
using namespace std;
int main()
{
    double lb, kg;
    cout << "Enter the weight in pounds: ";
    cin >> lb;
    kg = lb/2.2;
    cout << "Conversion of " << lb << " pounds into kilogram: " << kg << " kg";
    return 0;
}
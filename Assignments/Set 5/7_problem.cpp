// Write a program that accepts a weight in grams and converts it into:
// • Kilograms if the value is 1000 or more
// • Otherwise, display the value in grams.

#include <iostream>
using namespace std;
int main()
{
    double g, kg;
    cout << "Enter weight in grams: ";
    cin >> g;
    if( g > 1000)
    {
        kg = g / 1000;
        cout << "Conversion of " << g << " grams into kilograms is " << kg << " kilograms.";

    }
    else
    {
        cout << "The value : " << g << " grams";
    }
    return 0;
}
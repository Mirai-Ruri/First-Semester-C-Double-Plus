// Write a program that accepts a length in feet and converts it into meters.
// 1 ft = 0.3048 m

#include <iostream>
using namespace std;
int main()
{
    double ft, m;
    cout << "Enter the length in feet: ";
    cin >> ft;
    m = ft * 0.3048;
    cout << "Conversion of " << ft << " feet into meter: " << m << " m";
    return 0;
}
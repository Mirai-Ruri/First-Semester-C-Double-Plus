// Write a program that accepts a distance in miles and converts it into kilometers.
// If the distance is greater than 100 miles, display a message indicating a long distance.

#include <iostream>
using namespace std;
int main()
{
    double m, km;
    cout << "Enter the distance in miles: ";
    cin >> m;
    if (m > 100)
    {
        cout << "Such a long distance!" << endl;
    }
    km = 1.6 * m;
    cout << "Conversion of " << m << " miles in kilometer is " << km << " kilometers." << endl;

    return 0;
}
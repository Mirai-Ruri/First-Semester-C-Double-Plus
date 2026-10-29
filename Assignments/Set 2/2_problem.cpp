// The temperature today is entered by the user. Write a program that checks:
// If temperature is above 35, print “Very Hot”
// Otherwise, print “Normal Weather”‌, and print very cold if temperature is under 4 degree Celsius

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter Today's Weather: ";
    cin >> x;
    if (x > 35)
    {
        cout << "Today is very hot!";
    }
    else if (x < -4)
    {
        cout << "Today is very cold!";
    }
    else
    {
        cout << "Normal Temperature.";
    }
    return 0;
}
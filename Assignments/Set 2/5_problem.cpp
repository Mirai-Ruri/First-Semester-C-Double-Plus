// A number is entered by the user.
// Write a program using if–else to check whether the number is positive, negative, or zero.

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if ( x < 0)
    {
        cout << x << " is a negative number.";
    }
    else if( x > 0)
    {
        cout << x << " is a positive number.";
    }
    else
    {
        cout << x << " is zero.";
    }
    return 0;
}
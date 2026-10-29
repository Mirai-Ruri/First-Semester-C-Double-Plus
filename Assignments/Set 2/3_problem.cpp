// A number is entered by the user.
// Write a program using if–else to check whether the number is even or odd.

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if(x % 2 == 0)
    {
        cout << x << " is an even number.";
    }
    else
    {
        cout << x << " is an odd number.";
    }
    return 0;
}
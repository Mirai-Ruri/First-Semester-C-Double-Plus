// Two numbers are entered by the user.
// Write a program to display which number is greater, or print “Both are equal” if they are the same.

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    if (x == y)
    {
        cout << "Both are equal.";
    }
    else
    {
        cout << max(x, y) << " is greater.";
    }
    return 0;
}
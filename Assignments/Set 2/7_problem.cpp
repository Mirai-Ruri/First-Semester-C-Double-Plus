// A student enters the number of days they attended class.
// Write a program that checks:
// If attendance is 75 days or more, print “Allowed to sit exam”
// Else print “Not allowed to sit exam”

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number of days: ";
    cin >> x;
    if (x >= 75)
    {
        cout << "Allow to sit exam.";
    }
    else
    {
        cout << "Not allow to sit exam.";
    }
    return 0;
}
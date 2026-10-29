// A person’s age is entered.
// Write a program that checks:
// If age is 18 or above, print “Eligible to vote”
// Else print “Not eligible to vote”.

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter age: ";
    cin >> x;
    while (x < 0 || x > 110)
    {
        cout << "Invaid Age. Try Again: ";
        cin >> x;
    }
    if (x < 18)
    {
        cout << "Not eligible to vote.";
    }
    else
    {
        cout << "Eligible to vote.";
    }

    return 0;
}
// Thingyan is coming in N days.
// Write a program that uses recursion to count down and display “Day N before Thingyan” until Day 1.

#include <iostream>
using namespace std;
int days(int n)
{
    if (n > 0)
    {
        cout << "Day " << n << " before Thingyan.\n";
        return days(n - 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout << "How many days left until Thingyan? : ";
    cin >> n;
    days(n);
    return 0;
}
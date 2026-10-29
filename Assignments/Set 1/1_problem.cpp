// Thingyan is coming in days.
// Write a program that uses a for loop to print count down.
// e.g. Day 30 before Thingyan, Day 29 Before Thingyan, etc.

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter how many days left until Thingyan: ";
    cin >> x;
    for (x = x; x > 0; x--)
    {
        cout << "Day " << x << " before Thingyan\n";
    }
    cout << "Thingyan has arrived! Hurray!";
    return 0;
}


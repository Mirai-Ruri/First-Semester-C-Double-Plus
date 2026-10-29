// Write a program that accepts time in minutes and converts it into hours and minutes. Display the result in proper format.
// i.e. hh:mm:ss.

#include <iostream>
using namespace std;
int main()
{
    int time, hours, minutes;
    string seconds = "00";
    char character = ':';
    cout << "Enter time in minutes: ";
    cin >> time;
    hours = time / 60;
    minutes = time % 60;

    cout << "Time: ";
    if (hours < 10)
    {
        cout << "0";
    }
    cout << hours << character;
    
    if (minutes < 10)
    {
        cout << "0";
    }
    cout << minutes << character << seconds;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter Today's Weather: ";
    cin >> x;
    if ( x < -40 || x > 50)
    {
        cout << "Invalid Temperature.";
    }
    else if (x > 35)
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
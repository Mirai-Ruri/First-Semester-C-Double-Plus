#include <iostream>
using namespace std;
int main()
{
    int feet;
    float meter;
    for (int i = 1; i <= 100; i++)
    {
        cout << "Feet " << i << " to Meter: " << i * 0.305 << endl;
        if (i % 10 == 0)
        {
            cout << "\n";
        }
    }
    cout << "\n";
    cout << "Enter any Feet: ";
    cin >> feet;
    meter = feet * 0.305;
    cout << "Converted to Meter: " << meter << " m ";

    return 0;
}
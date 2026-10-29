// SP bakery gives a discount based on total purchase amount.
// 10% discount if amount is 30000 kyats,
// 20% discount if amount is over 50000 Kyats, and
// No discount otherwise.

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter total purchase: ";
    cin >> x;
    if (x == 30000)
    {
        cout << "Final discounted amount: " << x * 0.1;
    }
    else if (x >= 50000)
    {
        cout << "Final discounted amount: " << x * 0.2;
    }
    else
    {
        cout << "No discount. Total Amount: " << x;
    }
    return 0;
}

// double result = number * percent / 100
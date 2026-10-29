// A student wants to calculate power of a number. Write a program that uses recursion to calculate base ^ exponent.

#include <iostream>
using namespace std;
int power(int x, int y)
{
    if (y > 0)
    {
        return x * power(x, y - 1);
    }
    else
    {
        return 1; // not return 0;
    }
}
int main()
{
    int x, y;
    cout << "Enter base: ";
    cin >> x;
    cout << "Enter exponent: ";
    cin >> y;
    cout << "The result: " << power(x, y);
    return 0;
}
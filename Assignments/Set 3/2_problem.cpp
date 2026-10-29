// A student wants to find the sum of numbers from 1 to N. Write a program that uses recursion to calculate and display the sum.

#include <iostream>
using namespace std;
int sum(int n)
{
    if (n > 0)
    {
        return n + sum(n - 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    sum(n);
    int result = sum(n);
    cout << "The sum of numbers from 1 to " << n << " : " << result;
    return 0;
}
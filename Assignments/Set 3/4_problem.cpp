// A student wants to calculate factorial of a number. 
// Write a program that uses recursion to find and display the factorial of a given number.

#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n > 0)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n);
    return 0;
}
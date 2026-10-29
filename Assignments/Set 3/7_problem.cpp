// A student is learning Fibonacci numbers. Write a program that uses recursion to display the N-th Fibonacci number.

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if(n == 0)        // Base case 0
        return 0;
    else if(n == 1)   // Base case 1
        return 1;
    else              // Recursive case
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is " << fibonacci(n) << endl;
    return 0;
}
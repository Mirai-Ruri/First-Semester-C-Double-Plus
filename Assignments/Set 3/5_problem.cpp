// A staircase has N steps. Write a program that uses recursion to display each step number while climbing down from the top step to step 1.

#include <iostream>
using namespace std;
int steps(int n)
{
    if (n > 0)
    {
        cout << "Step Number: " << n << endl;
        return steps(n - 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout << "How many steps? : ";
    cin >> n;
    steps(n);
    return 0;
}
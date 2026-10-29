// A basket contains N mangoes.
// Write a program that uses recursion to count down and display the number of mangoes left until it reaches zero.

#include <iostream>
using namespace std;
int mangoes(int n)
{
    if (n > 0)
    {
        cout << n << " mangoes left." << endl;
        return mangoes(n - 1);
    }
    else
    {
        cout << n << " mango left." << endl;
        return 0;
    }
}
int main()
{
    int n;
    cout << "How many mangoes? : ";
    cin >> n;
    mangoes(n);
    return 0;
}
// A teacher calls roll numbers from 1 to 20. Use a for loop to print only even roll numbers.

#include <iostream>
using namespace std;
int main()
{
    int x;
    for (x = 1; x < 20; x++)
    {
        if (x % 2 == 0)
        {
            cout << "Roll Number: " << x << endl;
        }
    }
    return 0;
}
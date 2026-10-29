#include <iostream>
using namespace std;
int main()
{
    int x = 3;
    int y = 3;
    int z = ++x; // x and z are both 4
    int p = y++; // y is 4 and z is 3
    cout << x << endl << y << endl << z << endl << p;
    return 0;
}

// ++i (Pre-increment): The value of i is incremented first, 
// and the expression evaluates to the new, incremented value of i.

// i++ (Post-increment): The original value of i is used in the expression first, 
// and i is incremented afterwards as a side effect. The expression evaluates to the old value of i. 
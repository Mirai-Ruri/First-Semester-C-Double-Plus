// Students must memorize the 5-times table. Use any loop to print the multiplication table of 5 from 5 × 1 to 5 × 12.

#include <iostream>
using namespace std;
int main()
{
    int x;
    for (x = 1; x <= 12; x++)
    {
        cout << "5 x " << x << " = " << 5 * x << endl;
    }
    return 0;
}
// A student saves 1000 kyats every day for 7 days. Use a while loop to calculate and display the total saved money.

#include <iostream>
using namespace std;
int main()
{
    int x = 0;
    int y = 0;
    while (y < 7)
    {
        y++;
        x += 1000;
        cout << "Day " << y << " : " << x << endl;
    }
    cout << "Total Saved Money : " << x;

    return 0;
} 

// int main()
// {
//     int x;
//     int y = 0;
//     for (x = 1; x <= 7; x++)
//     {
//         y += 1000;
//         cout << "Day " << x << " : " << y << endl;
//     }
//     cout << "Total saved money : " << y;

//     return 0;
// }
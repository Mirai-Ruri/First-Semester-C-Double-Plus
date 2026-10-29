#include <iostream>
using namespace std;
int main()
{
    string names[2][2][2] =
        {
            // First [2] → 2 big groups
            // Second [2] → each group has 2 rows
            // Third [2] → each row has 2 items
            // names[group][row][column]
            {
                {"A", "B"},
                {"C", "D"},
            },
            {
                {"E", "F"},
                {"G", "H"},
            },
        };
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << names[i][j][k] << "\t";
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}
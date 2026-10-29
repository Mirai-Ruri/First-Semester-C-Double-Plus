#include <iostream>
using namespace std;
int main()
{
    string names[5][5][6] =
        {
            {"Name", "Rank", "Salary", "Leave", "Bonus", "Total"},
            {"A", "Manager", "100", "0", "500", "600"},
            {"B", "Sale", "200", "1", "600", "800"},
            {"C", "Analyst", "300", "5", "0", "300"},
            {"D", "Intern", "400", "0", "700", "1100"},
        };
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 6; k++)
            {
                cout << names[i][j][k] << "\t";
            }
        }
        cout << "\n";
    }
    return 0;
}
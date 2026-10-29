// There are four students in the class, and they have already taken three tutorial exams.
// Mg Mg got 65,70,74 for tutorials, Hla Hla got 80,68,76, Ma Ma got 90,100,99,96, and Thiha got 80,100,100,85 respectively.
// Display their names, tutorial no, and marks using two dimensional arrays.

#include <iostream>
using namespace std;
int main()
{
    string names[5][5] = {
        {"Names:   ", "Mg Mg", "Hla Hla", "Ma Ma", "Thiha"},
        {"Tutorial No_1:", "65", "80", "90", "80"},
        {"Tutorial No_2:", "70", "68", "100", "100"},
        {"Tutorial No_3:", "74", "76", "99", "100"},
        {"Tutorial No_4:", "0", "0", "96", "85"}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << names[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}
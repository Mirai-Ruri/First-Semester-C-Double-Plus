// A student has 5 subjects. Use a for loop to:
// • Input marks for 5 subjects
// • Calculate and print the total marks

#include <iostream>
using namespace std;
int main()
{
    int x, y;
    int z = 0;
    for (x = 1; x <= 5; x++)
    {
        cout << "Enter marks for subject " << x << " : ";
        cin >> y;
        z += y;
    }
    cout << "Total Marks : " << z;
    return 0;
}

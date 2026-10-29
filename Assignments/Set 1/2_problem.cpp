// There are 30 students in a classroom. Write a program using a while loop to print student numbers from 1 to 30.

#include <iostream>
using namespace std;
int main()
{
    int x = 31;
    while (x > 1)
    {
        x--;
        cout << "Student Number: " << x << "\n";
    }
    return 0;
}
// A teacher wants to calculate the total marks of a student.
// Write a program that uses recursion to find the sum of marks stored in an array.

#include <iostream>
using namespace std;
int marks(int a, int b, int c, int d, int e, int f)
{
    
        int x = 0;
        return x += marks(a, b, c, d, e, f);
    
}
int main()
{
    int mya, eng, maths, phys, chem, bio;
    cout << "Enter mark for Myanmar: ";
    cin >> mya;

    cout << "Enter mark for English: ";
    cin >> eng;

    cout << "Enter mark for Mathematics: ";
    cin >> maths;

    cout << "Enter mark for Physics: ";
    cin >> phys;

    cout << "Enter mark for Chemistry: ";
    cin >> chem;

    cout << "Enter mark for Biology: ";
    cin >> bio;

    cout << "Total Mark: " << marks(mya, eng, maths, phys, chem, bio);

    return 0;
}
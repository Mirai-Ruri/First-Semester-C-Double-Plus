// A student got marks in an exam.
// Write a program that accepts the marks and displays:
// “Pass” if marks are 50 or above
// “Fail” if marks are below 50
// "Credit" if marks are between 65 and 74
// "Distinction" if marks are over 80.
// Limit marks between 0 and 100. Else output error mark detected on your console.

#include <iostream>
using namespace std;
void Myanmar(int a)
{
    if (a < 50)
    {
        cout << "Myanmar : " << a << " (Fail)" << endl;
    }
    else if (a >= 50 && a < 65)
    {
        cout << "Myanmar : " << a << " (Pass)" << endl;
    }
    else if (a >= 65 && a <= 74)
    {
        cout << "Myanmar : " << a << " (Credit)" << endl;
    }
    else if (a >= 80)
    {
        cout << "Myanmar : " << a << " (Distinction)" << endl;
    }
}

void English(int b)
{
    if (b < 50)
    {
        cout << "English : " << b << " (Fail)" << endl;
    }
    else if (b >= 50 && b < 65)
    {
        cout << "English : " << b << " (Pass)" << endl;
    }
    else if (b >= 65 && b <= 74)
    {
        cout << "English : " << b << " (Credit)" << endl;
    }
    else if (b >= 80)
    {
        cout << "English : " << b << " (Distinction)" << endl;
    }
}
void Mathematics(int c)
{
    if (c < 50)
    {
        cout << "Mathematics : " << c << " (Fail)" << endl;
    }
    else if (c >= 50 && c < 65)
    {
        cout << "Mathematics : " << c << " (Pass)" << endl;
    }
    else if (c >= 65 && c <= 74)
    {
        cout << "Mathematics : " << c << " (Credit)" << endl;
    }
    else if (c >= 80)
    {
        cout << "Mathematics : " << c << " (Distinction)" << endl;
    }
}
void Physics(int d)
{
    if (d < 50)
    {
        cout << "Physics: " << d << " (Fail)" << endl;
    }
    else if (d >= 50 && d < 65)
    {
        cout << "Physics: " << d << " (Pass)" << endl;
    }
    else if (d >= 65 && d <= 74)
    {
        cout << "Physics: " << d << " (Credit)" << endl;
    }
    else if (d >= 80)
    {
        cout << "Physics: " << d << " (Distinction)" << endl;
    }
}
void Chemistry(int e)
{
    if (e < 50)
    {
        cout << "Chemistry : " << e << " (Fail)" << endl;
    }
    else if (e >= 50 && e < 65)
    {
        cout << "Chemistry : " << e << " (Pass)" << endl;
    }
    else if (e >= 65 && e <= 74)
    {
        cout << "Chemistry : " << e << " (Credit)" << endl;
    }
    else if (e >= 80)
    {
        cout << "Chemistry : " << e << " (Distinction)" << endl;
    }
}
void Biology(int f)
{
    if (f < 50)
    {
        cout << "Biology : " << f << " (Fail)" << endl;
    }
    else if (f >= 50 && f < 65)
    {
        cout << "Biology : " << f << " (Pass)" << endl;
    }
    else if (f >= 65 && f <= 74)
    {
        cout << "Biology : " << f << " (Credit)" << endl;
    }
    else if (f >= 80)
    {
        cout << "Biology : " << f << " (Distinction)" << endl;
    }
}

int main()
{
    int Myan, Eng, Maths, Phys, Chem, Bio;

    cout << "Enter marks for Myanmar: ";
    cin >> Myan;
    while (Myan < 0 || Myan > 100)
    {
        cout << "Invalid Marks." << endl;
        cout << "Enter marks for Myanmar again: ";
        cin >> Myan;
    }

    cout << "Enter marks for English: ";
    cin >> Eng;
    while (Eng < 0 || Eng > 100)
    {
        cout << "Invalid Marks." << endl;
        cout << "Enter marks for English again: ";
        cin >> Eng;
    }

    cout << "Enter marks for Mathematics: ";
    cin >> Maths;
    while (Maths < 0 || Maths > 100)
    {
        cout << "Invalid Marks." << endl;
        cout << "Enter marks for Mathematics again: ";
        cin >> Maths;
    }

    cout << "Enter marks for Physics: ";
    cin >> Phys;
    while (Phys < 0 || Phys > 100)
    {
        cout << "Invalid Marks." << endl;
        cout << "Enter marks for Physics again: ";
        cin >> Phys;
    }

    cout << "Enter marks for Chemistry: ";
    cin >> Chem;
    while (Chem < 0 || Chem > 100)
    {
        cout << "Invalid Marks." << endl;
        cout << "Enter marks for Chemistry again: ";
        cin >> Chem;
    }

    cout << "Enter marks for Biology: ";
    cin >> Bio;
    while (Bio < 0 || Bio > 100)
    {
        cout << "Invalid Marks." << endl;
        cout << "Enter marks for Biology again: ";
        cin >> Bio;
    }

    Myanmar(Myan);
    English(Eng);
    Mathematics(Maths);
    Physics(Phys);
    Chemistry(Chem);
    Biology(Bio);

    return 0;
}
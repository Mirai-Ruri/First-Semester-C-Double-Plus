// Write a program that will calculate the different areas of rectangle, triangle, square and circle.
// Ask the user which area they want to calculate. Use functions for better code.

#include <iostream>
#include <cmath>
using namespace std;
void rectangle()
{
    int length, breadth;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    cout << "The area of rectangle: " << length * breadth;
}
void triangle()
{
    int base, height, ans;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;
    ans = base * height;
    cout << "The area of rectangle: " << ans / 2;
}
void square()
{
    int length;
    cout << "Enter length: ";
    cin >> length;
    cout << "The area of square: " << pow(length, 2);
}
void circle()
{
    int radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "The area of circle: " << 3.142 * pow(radius, 2);
}
int main()
{
    int x;
    cout << "What area do you want to find? (1. Rectangle) (2. Triangle) (3. Square) (4. Circle)" << endl;
    cout << "Choose a number: ";
    cin >> x;
    while (x < 0 || x > 4)
    {
        cout << "Invalid Input. Try Again: ";
        cin >> x;
    }
    if (x == 1)
    {
        rectangle();
    }
    else if (x == 2)
    {
        triangle();
    }
    else if (x == 3)
    {
        square();
    }
    else if (x == 4)
    {
        circle();
    }
    return 0;
}
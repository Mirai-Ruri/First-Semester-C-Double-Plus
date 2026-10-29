#include <iostream>
#include <cmath>
using namespace std;

void rectangle_area()
{
    int length, breadth;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter breadth: ";
    cin >> breadth;
    cout << "Rectangle area: " << length * breadth << "\n\n";
}

void square_area()
{   
    double length;
    cout << "Enter square length: ";
    cin >> length;
    cout << "Square area: " << pow(length, 2) << "\n\n";
}

void triangle_area()
{
    int base, height, ans;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter height: ";
    cin >> height;
    ans = base * height;
    cout << "Triangle area: " << ans / 2 << "\n\n";
}

void circle_area()
{
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    cout << "Circle area: " << 3.142 * radius * 2 << "\n\n";
}

int main()
{
    rectangle_area();
    square_area();
    triangle_area();
    circle_area();
    return 0;
}

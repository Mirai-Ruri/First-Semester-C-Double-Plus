#include <iostream>
using namespace std;
int main()
{
    int a = 100;
    int b = 50;
    int c;
    cout << "Before swapping: " << endl;
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "After swapping: " << endl;
    cout << "A : " << a << endl;
    cout << "B : " << b << endl;
    return 0;
}
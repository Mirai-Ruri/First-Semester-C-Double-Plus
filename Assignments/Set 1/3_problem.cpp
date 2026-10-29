// Write a program that will convert Dollars into Myanmar Kyats, Chinese Yuan, Japanese Yen, and Korea Won.
//(Use different function to achieve better coding style)

#include <iostream>
#include <cmath>
using namespace std;
void Dollar()
{
    int x;
    cout << "Enter Dollar Amount: ";
    cin >> x;
}
void Kyat()
{
    int x;
    cout << "Myanmar Kyat: " << x * 4100 << " kyat" << endl;
}
void Yuan()
{
    int x;
    cout << "Chinese Yuan: " << x * 6.94 << " Yuan" << endl;
}
void Yen()
{
    int x;
    cout << "Japanese Yen: " << x * 151.07 << " Yen" << endl;
}
void Wen()
{
    int x;
    cout << "Korean Wen: " << x * 1466.79 << " Won" << endl;
}

int main()
{
    Dollar();
    Kyat();
    Yuan();
    Yen();
    Wen();
    return 0;
}
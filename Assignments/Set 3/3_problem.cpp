// A student is practicing multiplication. Write a program that uses recursion to calculate the multiplication of two numbers.
// a×b=a+a+a+...(b times)

#include <iostream>
using namespace std;
int multiplication(int x, int y)
{
    if (y > 0)
    {
        return x + multiplication(x, y - 1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    int result = multiplication(x, y);
    cout << "The multiplication of " << x << " and " << y << " : " << result;
    return 0;
}

// int multiplication(int x, int y)
// {
//     // if x is less than
//     // y swap the numbers
//     if (x < y)
//         return multiplication(y, x);

//     // iteratively calculate
//     // y times sum of x
//     else if (y != 0)
//         return (x + multiplication(x, y - 1));

//     else
//         return 0;
// }

// int main()
// {
//     int x, y;
//     cout << "Enter first number: ";
//     cin >> x;
//     cout << "Enter second number: ";
//     cin >> y;
//     int result = multiplication(x, y);
//     cout << "The multiplication of " << x << " and " << y << " : " << result;
//     return 0;
// }

// Write a program that will accept any character as long as the user didn't input 'q'.

#include <iostream>
using namespace std;
int main()
{
    char letter;
    do
    {
        cout << "Enter a letter: ";
        cin >> letter;
        if (letter == 'q')
        {
            cout << "You can't enter \'q\'.";
        }

    } while (letter != 'q');

    return 0;
}
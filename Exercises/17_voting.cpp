#include <iostream>
using namespace std;
int main()
{
    cout << "Do While\n";
    char sport;
    int a = 0, s = 0, f = 0, b = 0;
    do
    {
        cout << "Type a letter chosen or Q for quit\n";
        cout << "A: Athletics\n";
        cout << "S: Swimming\n";
        cout << "F: Football\n";
        cout << "B: Badminton\n";
        cin >> sport;
        if (sport == 'A')
            a++;
        if (sport == 'B')
            b++;
        if (sport == 'F')
            f++;
        if (sport == 'B')
            b++;
    } while (sport != 'Q');
    cout << "A: Athletics: " << a << endl;
    cout << "S: Swimming: " << s << endl;
    cout << "F: Football: " << f << endl;
    cout << "B: Badminton: " << b << endl;
    return 0;
}
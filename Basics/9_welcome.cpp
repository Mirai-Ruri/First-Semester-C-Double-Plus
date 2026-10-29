// #include <iostream>
// using namespace std;
// int main()
// {
//     int english, mathematics, total;
//     cout << "Enter your English mark: ";
//     cin >> english;
//     cout << "Enter your Mathematics mark: ";
//     cin >> mathematics;
//     total = english + mathematics;
//     cout << "Total : " << total << endl;
//     if(total > 120){
//         cout << "Welcome to Computer Science!";
//     }
//     else{
//         cout << "Welcome to Others!";
//     }
//     return 0;

// }

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int eng, maths;
    cout << "Enter your English Mark: ";
    cin >> eng;
    cout << "Enter your Mathematics Mark: ";
    cin >> maths;
    cout << "Your Total Mark is: " << eng + maths << endl;
    if (eng + maths > 120){
        cout << "Welcome to CS!";
    }
    else{
        cout << "Welcome to Others!";
    }
    return 0;

}
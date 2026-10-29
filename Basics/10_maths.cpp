// #include <iostream>
// #include <cmath>
// using namespace std;
// int main()
// {
//     int maths;
//     cout << "Enter your Mathematics mark: ";
//     cin >> maths;
//     if(maths >= 90 ){
//         cout << "You have distinction with credits!" << endl;
//     }
//     else if(maths >= 80 && maths <= 90 ){
//         cout << "You have distinction." << endl;
//     }
//     else{
//         cout << "Sorry. You did not get distinction." << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int maths;
    cout << "Enter your Mathematics mark: ";
    cin >> maths;
    if(maths > 100 || maths < 0){
        cout << "Your mark cannot be over 100 or below 0!";
    }
    else if(maths > 90)
    {
        cout << "Superb! You are natural born Mathematics genius!";
    }
    else if(maths >= 80 && maths <= 90){
        cout << "Congrats! You got distinctions!";
    }
    else if(maths < 80 && maths >= 40){
        cout << "You made it!";
    }
    else{
        cout << "Don't give up!";
    }
    return 0;

}
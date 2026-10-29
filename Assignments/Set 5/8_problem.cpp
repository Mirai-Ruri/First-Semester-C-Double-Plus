// Write a program that accepts a height in centimeters, and Gender.
// If the height is greater than or equal to 160 cm for girls, and 170 for boys, display “Tall”, otherwise display “Average height”.

#include <iostream>
using namespace std;
int main()
{
    string gender;
    int height;
    char character = '/';
    cout << "Enter your height in centimeters and gender(eg: 160/girl) : ";
    cin >> height >> character;
    getline(cin, gender);
    if (gender == "girl" & height >= 160)
    {
        cout << "Oh, you are a tall girlie.";
    }
    else if (gender == "boy" & height >= 170)
    {
        cout << "Boy, you are tall.";
    }
    else
    {
        cout << "You have an average height for a " << gender;
    }

    return 0;
}
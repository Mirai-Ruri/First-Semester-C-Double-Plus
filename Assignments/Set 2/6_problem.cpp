// A user enters a character.
// Write a program using if–else to check whether the character is a vowel or a consonant. (Vowels are a, e, i, o, u)

#include <iostream>
using namespace std;
int main()
{
    char letter;
    cout << "Enter a character: ";
    cin >> letter;
    letter = tolower(letter);
    if( letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        cout << letter << " is a vowel.";
    }
    else
    {
        cout << letter << " is a consonant.";
    }
    return 0;
}


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     char letter;
//     cout << "Enter a character: ";
//     cin >> letter;

//     string vowels = "aeiouAEIOU";

//     if (vowels.find(letter) != string::npos) {
//         cout << letter << " is a vowel.";
//     } else {
//         cout << letter << " is a consonant.";
//     }

//     return 0;
// }

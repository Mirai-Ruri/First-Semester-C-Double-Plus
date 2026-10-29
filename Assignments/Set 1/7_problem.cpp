// Write a program that will count votes for EC selection.
// There will be three candidates, and you can vote by entering the initial of each candidate name from console.
// Count each initial to decide the numbers of vote received by each candidate.
//(You can pretend yourself as different voters by entering different initial). The class should have at least 10 students who can vote.

#include <iostream>
using namespace std;
int main() 
{
    int students;
    int A = 0;
    int B = 0;
    int C = 0;
    char votes;
    cout << "There are three candidates. (A, B, C)" << endl;
    cout << "Enter how many students there are in class : ";
    cin >> students;
    for (int i = 1; i <= students; i++)
    {
        cout << "Student number " << i << " : ";
        cin >> votes;
        if (votes == 'A')
        {
            A++;
        }
        else if (votes == 'B')
        {
            B++;
        }
        else
        {
            C++;
        }
    }

    cout << "A got " << A << " votes." << endl;
    cout << "B got " << B << " votes." << endl;
    cout << "C got " << C << " votes." << endl;
    return 0;
}
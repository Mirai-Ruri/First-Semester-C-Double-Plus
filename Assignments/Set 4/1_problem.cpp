// (Single Problem Set)
// Write a linear search algorithm to find the maximum marks of students for CS1101.
// The marks as follow. 87,67,79,100,45,67,88.
// Count how many students passed the exam, how many students gain distinctions,
// how many students get credit and how many students get the full mark.

#include <iostream>
using namespace std;
int main()
{
    int i;
    int fail = 0;
    int pass = 0;
    int credit = 0;
    int distinction = 0;
    int full_mark = 0;
    int highest_mark = 0;
    string top_student;
    string students[7] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh"};
    int marks[7] = {0, 0, 0, 0, 0, 0, 0};

    for (i = 0; i < 7; i++)
    {
        cout << "Enter " << students[i] << " student's mark: ";
        cin >> marks[i];
        if (marks[i] > highest_mark)
        {
            highest_mark = marks[i];
            top_student = students[i];
        }

        if (marks[i] < 50)
        {
            fail++;
        }

        if (marks[i] >= 50)
        {
            pass++;
        }

        if (marks[i] >= 65 && marks[i] < 80)
        {
            credit++;
        }

        if (marks[i] >= 80)
        {
            distinction++;
        }

        if (marks[i] == 100)
        {
            full_mark++;
        }
    }
    
    cout << "The " << top_student << " student got the highest mark: " << highest_mark << endl;
    cout << "The number of students who passed the exam: " << pass << endl;
    cout << "The number of student who failed the exam: " << fail << endl;
    cout << "The number of students who got credit: " << credit << endl;
    cout << "The number of student who got distinction: " << distinction << endl;
    cout << "The number of student who got full mark: " << full_mark << endl;

    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
void file_read()
{
    string Answer;
    ifstream ReadFile("D:\\School\\First Year\\VotingResult.txt");
    while (getline(ReadFile, Answer))
    {
        cout << Answer << endl;
    }
}
void file_create(int arr[], int size)
{
    ofstream AnswerFile("D:\\School\\First Year\\VotingResult.txt");
    AnswerFile << "Sorted Vote Array In Ascending Order: ";
    for (int i = 0; i < size; ++i)
    {
        AnswerFile << arr[i] << " ";
    }
    AnswerFile.close();
    file_read();
}
void ascending_sort(int a, int b, int c)
{
    int arr[] = {a, b, c};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    file_create(arr, size);
}

void voting(int vote, int a, int b, int c)
{
    for (int i = 0; i < 10; i++)
    {
        cout << "Vote: ";
        cin >> vote;
        switch (vote)
        {
        case 1:
            a++;
            break;

        case 2:
            b++;
            break;

        case 3:
            c++;
            break;

        default:
            break;
        }
    }
    cout << "Unsorted Vote Array: " << a << " " << b << " " << c << endl;
    ascending_sort(a, b, c);
}

int main()
{
    int vote;
    int a = 0, b = 0, c = 0;
    cout << "There are ten students and three candidates - A, B, C. \nType 1 for A, 2 for B, 3 for C." << endl;
    voting(vote, a, b, c);

    return 0;
}
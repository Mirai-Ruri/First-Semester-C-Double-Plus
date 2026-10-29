#include <iostream>
#include <fstream>
using namespace std;
void file_read()
{
    string Answer;
    ifstream ReadFile("D:\\School\\First Year\\VotingResult2.txt");
    while (getline(ReadFile, Answer))
    {
        cout << Answer << endl;
    }
}
void file_create(int arr[], int size)
{
    ofstream AnswerFile("D:\\School\\First Year\\VotingResult2.txt");
    AnswerFile << "Sorted Vote In Ascending Order: ";
    for (int i = 0; i < size; i++)
    {
        AnswerFile << arr[i] << " ";
    }
    AnswerFile.close();
    file_read();
}
void ascending(int a, int b, int c, int d)
{
    int arr[] = {a, b, c, d};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < size; i++)
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
void voting(int a, int b, int c, int d)
{
    int vote;
    for (int i = 0; i < 10; i++)
    {
        cout << "Type 1 for A, 2 for B, 3 for C, 4 for D :";
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

        case 4:
            d++;
            break;

        default:
            break;
        }
    }
    ascending(a, b, c, d);
}
int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    cout << "There are 10 voters and 4 candidates - A, B, C, D." << endl;
    voting(a, b, c, d);

    return 0;
}
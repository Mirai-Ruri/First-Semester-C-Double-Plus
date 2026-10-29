#include <iostream>
using namespace std;
void linear_search(int mark_arr[], int max_mark)
{
    bool found = false;
    for (int i = 0; i < 6; i++)
    {
        if (mark_arr[i] == max_mark)
        {
            found = true;
            cout << "The maximum mark is found at index " << i << " and value is " << mark_arr[i] << endl;
        }
    }
    if (found == false)
    {
        cout << "Not Found.";
    }
}
void count(int mark_arr[])
{
    int p = 0, f = 0, c = 0, d = 0, i;
    for (i = 0; i < 6; i++)
    {
        if (mark_arr[i] < 40)
        {
            f++;
        }
        if (mark_arr[i] < 65)
        {
            p++;
        }
        if (mark_arr[i] < 80)
        {
            c++;
        }
        else
        {
            d++;
        }
    }

    cout << "Failed: " << f << endl;
    cout << "Passed: " << p << endl;
    cout << "Credit: " << c << endl;
    cout << "Distinction: " << d << endl;
}
int main()
{
    int mark_arr[] = {79, 100, 88, 34, 80, 77};
    int max_mark = 100;
    linear_search(mark_arr, max_mark);
    count(mark_arr);

    return 0;
}
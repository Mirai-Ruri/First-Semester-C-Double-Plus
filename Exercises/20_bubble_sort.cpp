#include <iostream> 
using namespace std;
void ascending(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) 
    // Outer loop, Controls how many passes bubble sort makes
    {
        for (int j = 0; j < size - i - 1; j++) 
        // Inner loop, Compares adjacent elements
        {
            if (arr[j] > arr[j + 1])
            {
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void descending(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {23, 78, 45, 8, 32, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    ascending(arr, size);
    descending(arr, size);

    return 0;
}
#include <iostream>
using namespace std; 
void ascending() 
{
    int arr[] = {23, 78, 45, 8, 32, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    // sizeof(arr) → total bytes of array
    // sizeof(arr[0]) → bytes of one element

    for (int i = 1; i < size; ++i)
    // This loop goes through the array starting from index 1.
    // Why start at 1?
    // Because the first element is already considered sorted.
    // Sorted | Unsorted
    // 23 | 78 45 8 32 56
    {
        int key = arr[i];
        int j = i - 1; // Compare with previous elements

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        // j >= 0 → stay inside array
        // arr[j] > key → shift if bigger than key

        arr[j + 1] = key;
    }

    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
void descending()
{
    int arr[] = {23, 78, 45, 8, 32, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    ascending();
    descending();

    return 0;
}
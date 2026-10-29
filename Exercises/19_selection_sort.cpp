#include <iostream> 
using namespace std; 
void ascending(int arr[], int size)
{
    for (int i = 0; i < size ; ++i)
    {
        int minIndex = i; // Assume first element is smallest

        for (int j = i + 1; j < size; ++j) // Inner loop (search for smallest element)
        {
            if (arr[j] < arr[minIndex]) // Find the actual minimum
            {
                minIndex = j;
            }
        }

        // int temp = arr[i]; // Swap elements
        // arr[i] = arr[minIndex];
        // arr[minIndex] = temp;
        swap(arr[i], arr[minIndex]);
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
    for (int i = 0; i < size; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        // int temp = arr[i];
        // arr[i] = arr[maxIndex];
        // arr[maxIndex] = temp;
        swap(arr[i], arr[maxIndex]);
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
    int arr[] = {23, 78, 45, 8, 32, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    ascending(arr, size);
    descending(arr, size);
    return 0;
}
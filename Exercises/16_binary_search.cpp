#include <iostream>
using namespace std; 
int main() 
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    // Binary search only works on sorted arrays. 10 elements.

    int size = sizeof(arr) / sizeof(arr[0]);
    // sizeof(arr) → total bytes of the array
    // sizeof(arr[0]) → bytes of one element
    // On most systems, int = 4 bytes:
    // sizeof(arr) = 10 × 4 = 40 bytes
    // sizeof(arr[0]) = 4 bytes
    // size = 40 / 4 = 10

    int target = 55;
    int left = 0;
    int right = size - 1;
    int index = -1;
    // left → starting index (0)
    // right → last index (9)
    // left & right are pointers representing the current search range in the array.
    // Binary search always works between left and right.

    while (left <= right)
    // Keep searching while there is still a valid range.
    {
        int mid = left + (right - left) / 2;
        // This calculates the middle index safely.
        // To avoid integer overflow in very large arrays.

        if (arr[mid] == target)
        // If middle value equals target:
        // Save index
        // Break the loop
        {
            index = mid;
            break;
        }
        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found in the array." << endl;
    return 0;
}

//  while (left <= right)
//     {
//         int mid = left + (right - left) / 2;
//         if (arr[mid] == target)
//         {
//             found = true;
//             cout << "Element found at index: " << mid << endl;
//             break;
//         }
//         if (arr[mid] < target)
//         {
//             left = mid + 1;
//         }
//         else
//         {
//             right = mid - 1;
//         }
//     }
//     if (found == false)
//     {
//         cout << "Not Found.";
//     }
//     return 0;
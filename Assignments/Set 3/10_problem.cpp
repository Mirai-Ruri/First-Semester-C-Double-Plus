// A student wants to find the largest number in a list of numbers.
// Write a program that uses recursion to find and display the maximum value in an array.
#include <iostream>
using namespace std;

// Recursive function to find the maximum in an array
int findMax(int arr[], int n)
{
    // Base case: if the array has only one element
    if (n == 1)
        return arr[0];

    // Recursive case: compare last element with max of the rest
    int max_of_rest = findMax(arr, n - 1);
    return (arr[n - 1] > max_of_rest) ? arr[n - 1] : max_of_rest;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int maximum = findMax(arr, n);
    cout << "The largest number is: " << maximum << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
	int target = 144;
	int found = 0;
	int array[5] = {5, 20, 26, 14, 8};
	// or int array[] = {5, 20, 26, 14, 8, 12};
	for (int i = 0; i <= 4; i++)
	{
		if (array[i] == target)
		{
			found = 1;
			cout << "Found at index " << i << ". Value is " << array[i] << endl;
		}
	}
	if (found == 0)
	{
		cout << "Not Found.";
	}
	return 0;
}

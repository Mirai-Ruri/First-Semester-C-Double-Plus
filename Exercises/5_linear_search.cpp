#include <iostream>
using namespace std;
int main()
{
	int target = 14;
	bool found = false;
	int array[5] = {5,20,26,14,8};
	for(int i=0; i<=4; i++)
	{
		if(array[i] == target)
		{
			found = true;
			cout << "Found at index " << i << ". Value is " << array[i] <<endl;
		}
		
	}
	if(found == false)
		{
			cout << "Not Found.";
		}
	return 0;
}

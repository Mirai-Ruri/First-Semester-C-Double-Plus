#include <iostream>
using namespace std;
int main()
{
	string names[2][4] = {
		{"Khin", "Moe", "Apple", "Cherry"},
		{"Yoon", "Kya", "Banana", "Berry"}};
	for (int i = 0; i < 2; i++) // row(0,1)
	{
		for (int j = 0; j < 4; j++) // col(0,1,2,3)
		{
			cout << names[i][j] << "\t";
		}
		cout << "\n";
	}
	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a[5]={2,3,4,2,2};
	int b[5]={1,3,2,3,2};
	int c[5];
	
	for(int i = 0; i <= 4; i ++)
	{

//		c[i] = a[i] + b[i];
	    int c = a[i] * pow(2,i) + b[i] * pow(2,i);
		cout << c << endl;
	}
	

	return 0;
}


//		c[0] = a[0] + b[0];
//		c[1] = a[1] + b[1];
//		c[2] = a[2] + b[2];
//		c[3] = a[3] + b[3];
//		c[4] = a[4] + b[4];

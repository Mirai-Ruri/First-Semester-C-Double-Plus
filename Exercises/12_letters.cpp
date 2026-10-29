#include <iostream>
using namespace std;
int main()
{
	
	char letter = 'a';
	do {
		cout << letter;
		letter ++;
	}
	while ( letter <= 'z');
	cout << endl;
	
	
	char c_letter = 'A';
	do {
		cout << c_letter;
		c_letter ++;
	}
	while ( c_letter <= 'Z');
	cout << endl;

	return 0;
}

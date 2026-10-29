// \t can do tab
// \a can make a sound??
// backslash for 
// void display is called display function
//should read documentations

#include <iostream>
#include <cmath>
using namespace std;

void display()
{
	cout << "\"Mg Mg\" \n";
	cout << "\'Ma Ma\' \n";
	cout << "Make a sound \a" << endl;
	cout << "D:\\WYT\\First Year\\First Semester\\CS 1101\\New folder" << endl;
	cout << "D:/WYT/First Year/First Semester/CS 1101/New folder \n\n";
	
	
}

void circle_area()
{
	double radius;
	cout << "Enter radius: ";
	cin >> radius;
	cout << "Circle area: " << 3.142*radius*2 << "\n\n";
	
}

void square_area()
{
	double length;
	cout << "Enter square length: ";
	cin >> length;
	cout << "Square area: " << pow(length,2) << "\n\n";
}

int rectangle()
{
	int length, breadth;
	cout << "Enter length: ";
	cin >> length;
	cout << "Enter breadth: ";
	cin >> breadth;
	return length*breadth;
}

int main()
{
	display();
	circle_area();
	square_area();
	cout << rectangle() << "\n\n" ;

	
	int n1, n2;
	cout << "Enter number 1: ";
	cin >> n1;
	cout << "\tEnter number 2: ";
	cin >> n2;
	cout << "Result: ";
	cout << n1 + n2;
	return 0;
	
}

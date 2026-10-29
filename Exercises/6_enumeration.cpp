#include <iostream>
using namespace std;

//Enumeration
enum days {Sun, Mon, Tues, Wed, Thurs, Fri, Sat};
enum month {Jan, Feb, March, April};
enum season {spring,summer,autumn,winter}theseason;




int main()
{
	days today;
	today=Wed;
	cout << "Today: " <<today<<endl;
	//cout<<"\nTomorrow: " <<today+1;
	season s;
	s = winter;
	cout << "Winter season is at: " << s << endl;
	return 0;
}
//An enum (enumeration) in C++ is a user-defined data type that allows you to give names to a set of integer values. 
//It makes your code more readable and easier to understand.

// #include <iostream>
// using namespace std;

// // Enumeration
// enum days {Sun, Mon, Tues, Wed, Thurs, Fri, Sat};
// enum season {spring, summer, autumn, winter};

// int main() {
//     days today = Wed;
//     season s = winter;

//     // Array of names for printing
//     const char* dayNames[] = {"Sun", "Mon", "Tues", "Wed", "Thurs", "Fri", "Sat"};
//     const char* seasonNames[] = {"spring", "summer", "autumn", "winter"};

//     cout << "Today: " << dayNames[today] << endl;
//     cout << "Winter season is at: " << seasonNames[s] << endl;

//     return 0;
// }

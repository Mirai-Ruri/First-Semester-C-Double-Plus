#include <iostream>
using namespace std;
int main()
{
    int hour, minute;
    char colon;
    cout << "What time is it? (HH:MM) : ";
    cin >> hour >> colon >> minute;
    if(colon != ':' || hour < 0 || hour > 24 || minute < 0 || minute > 59){
        cout << "Invalid Time!" << endl;
        return 0;
    }
    if(hour >= 5 && hour <= 6){
        cout << "Wow! Early Birdie!";
    }
    else if(hour > 6 && hour < 12){
        cout << "Good Morning!";
    }
    else if(hour >=12 && hour < 18){
        cout << "Good Afternoon!";
    }
    else if(hour >= 18 && hour < 22){
        cout << "Good Evening!";
    }
    else{
        cout << "Wow! Night Owl!";
    }
    return 0;
}
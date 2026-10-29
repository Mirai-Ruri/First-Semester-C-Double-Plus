#include <iostream>
using namespace std;
int main(){
    
    int myanmar;
    int english;
    int mathematics;
    int physics;
    int chemistry;
    int biology;
    int total;
    cout << "Enter marks for Myanmar : " << endl;
    cin >> myanmar;
    cout << "Enter marks for English : " << endl;
    cin >> english;
    cout << "Enter marks for Mathematics : " << endl;
    cin >> mathematics;
    cout << "Enter marks for Physics : " << endl;
    cin >> physics;
    cout << "Enter marks for Chemistry : " << endl;
    cin >> chemistry;
    cout << "Enter marks for Biology : " << endl;
    cin >> biology;
    total = myanmar + english + mathematics + physics + chemistry + biology;
    cout << "Total marks is : " << total << endl;
    return 0;

}
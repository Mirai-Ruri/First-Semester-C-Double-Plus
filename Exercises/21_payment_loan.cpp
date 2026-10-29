#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double principal;
    int num_year;
    int pay_per_year;
    double int_rate;
    cout << "Enter Principal: ";
    cin >> principal;
    cout << "Enter num_year: ";
    cin >> num_year;
    cout << "Enter pay_per_year: ";
    cin >> pay_per_year;
    cout << "Enter rate: ";
    cin >> int_rate;
    // double answer = (int_rate * (principal / pay_per_year)) / (1 - pow(1 + (int_rate / pay_per_year), -pay_per_year * num_year));
    double answer = (int_rate * (principal / pay_per_year)) / (1 - pow(((int_rate / pay_per_year) + 1), -pay_per_year * num_year));
    cout << "Answer: " << answer;
    return 0;
}
#include <iostream>
using namespace std;
void descending_cars()
{
	string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
	cout << "Descending_cars: " <<endl;
	for ( int j = 4; j >= 0; j--)
	{
		cout << cars[j] << "\n" <<endl; 
	}
	
}

void ascending_cars()
{
	string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
	cout << "Ascending_cars: " << endl;
	for (int i = 0; i < 5; i++)
    {
        cout << cars[i] << "\n" <<endl;
    }
	
}

void descending_prices()
{
	int prices[5] = {15400, 20000, 15000, 34000, 20000};
	cout << "Descending Prices: " << endl;
	for(int q = 4; q >= 0; q--)
	{
	    cout << prices[q] << "\n" <<endl;
	}

}

void ascending_prices()
{
	int prices[5] = {15400, 20000, 15000, 34000, 20000};
	cout << "Ascending Prices: " << endl;
	for(int p = 0; p < 5; p++)
	{
	    cout << prices[p] << "\n" <<endl;
	}
}

int main()
{

    ascending_cars();
	descending_cars();
	ascending_prices();
	descending_prices();
	
	
	return 0;
	
}

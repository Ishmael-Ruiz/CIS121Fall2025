#include <iostream>
using namespace std;
int main()
{

	// define variable

	double stockprc;
	int stockqty;
	double stockval;

	// input phase
	cout << "Enter the current stock price ";
	cin >> stockprc;
	cout << "Enter the quantity of stock ";
	cin >> stockqty;

	// process phase

	stockval = stockprc * stockqty;
	cout << "The current value of the stock in your portfolio is : $" << stockval << endl;

	return 0;

}
#include <iostream>
#include <iomanip>
using namespace std;
int main() 
{
	//define variables

	int itemqty;
	double unitprc, extprc, tx, txntotal;

	//input phase

	cout << "Enter the item quantity: :";
	cin >> itemqty;

	// process phase
	
	if(itemqty >= 1000)
	{
		unitprc = 3.00;
	}
	else
	{
		unitprc = 5.00;
	}


	extprc = itemqty * unitprc;
	tx = extprc * 0.07;
	txntotal = extprc + tx;

	// output phase

	cout << setpricision(2) << fixed;
	cout << "The item quantity is: " << itemqty << endl;
	cout << "The unit price is: $" << unitprc << endl;
	cout << "The extended price is: $" << extprc << endl;
	cout << "The tax (7%) is : $" << tx << endl;
	cout << "The total cost including tax is: $" << txntotal << endl;

	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variable
	int partn, quantity;
	double unitprc, totalcost;
	// input phase
	cout << "Enter part number (10, 99, 55, 70, 50): ";
	cin >> partn;
	cout << "Enter quantity: ";
	cin >> quantity;
	// process phase
	if (partn == 10 && quantity > 1000) {
		unitprc = 1.00;
	}
	else if (partn == 99 && quantity > 500) {
		unitprc = 2.00;
	}
	else {
		unitprc = 5.00;
	}
	totalcost = unitprc * quantity;
	// output phase
	cout << setprecision(2) << fixed;
	cout << "Part Number: " << partn << endl;
	cout << "The cost per unit is: $" << unitprc << endl;
	cout << "The total cost is: " << totalcost << endl;

	return 0;
}
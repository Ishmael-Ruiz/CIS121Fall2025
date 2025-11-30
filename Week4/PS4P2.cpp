#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
// define variable

	string itemaorb, A, B;
	int qty;
	double unitprc, extprc;

// input phase

	cout << "Enter the item you picked (A or B): Item ";
	cin >> itemaorb;
	cout << "Enter the amount of items you picked: ";
	cin >> qty;

		// process phase

	if (itemaorb == A)
	{
		unitprc = 10.00
	}
	if (itemaorb == B)
	{
		unitprc = 20.00
	}
	extprc = qty * unitprc

		// output phase

	cout << setpricision(2) << fixed;
	cout << "The itee you ordered is : Item " << itemaorb << endl;
	cout << "The price per item is $" << unitprc << endl;
	cout << "The total price for all the items you order is: $" << extprc << endl;

	return 0;
}

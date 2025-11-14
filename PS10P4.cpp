#include <iostream>
#include <iomanip>
using namespace std;
void computewidgetcost(int widgets, double& cosperwidget, double& extprice, double& tax, double& totalorder)
{
	if (widgets >= 10000)
		cosperwidget = 4.00;
	else if (widgets >= 5000)
		cosperwidget = 5.00;
	else
		cosperwidget = 10.00;

	extprice = widgets * cosperwidget;
	tax = extprice * 0.07;
	totalorder = extprice + tax;
}
int main()
{
	// define variables
	int widgets;
	double cosperwidget, extprice, tax, totalorder;
	double sumtotalorder = 0.0;

	// input phase
	cout << "Enter number of widgets ordered (Ctrl+Z to stop): ";
	cin >> widgets;

	// process phase
	while (!cin.eof())
	{
		computewidgetcost(widgets, cosperwidget, extprice, tax, totalorder);
		
		// output within loop
		cout << setpricision(2) << fixed;
		cout << "Number of Widgets ordered: " << widgets << endl;
		cout << "Cost per Widget: $" << cosperwidget << endl;
		cout << "Extended price: $" << extprice << endl;
		cout << "Sales Tax (7%): $" << tax << endl;
		cout << "Total order including tax: $" << totalorder << endl;

		sumtotalorder += totalorder;
	}
	//output after loop
	cout << "Total sum of all orders: $" << sumtotalorder << endl;

	return 0;
}
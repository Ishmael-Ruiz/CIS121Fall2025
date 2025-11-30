#include<iostream>
#include <iomanip>
using namespace std;
void compute_order(double quantity, double price, double& total, double& tax, double& totalorder)
{
	total = quantity * price;
	tax = total * 0.07;
	totalorder = total + tax;
}
int main()
{

	// define variables

	double quantity, price;
	double total, tax, totalorder;
	double sumtotal = 0.0, sumtax = 0.0;

	// input phase

	cout << "Enter quantity and price (Ctrl+Z to stop): ";
	cin >> quantity >> price;

	// process phase

	while (!cin.eof())
	{
		compute_order(quantity, price, total, tax, totalorder);

		// output within loop
		cout << setpricision(2) << fixed;
		cout << "Total: $" << total << endl;
		cout << "Tax: $" << tax << endl;
		cout << "Total Order: $" << totalorder << endl;

		sumtotal += total;
		sumtax = +tax;

	}
	// output after loop
	cout << setpricision(2) << fixed;
	cout << "Sum of all orders before tax: $" << sumtotal << endl;
	cout << "Sum of all tax: $" << sumtax << endl;

	return 0;
}

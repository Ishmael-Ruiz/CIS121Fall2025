#include<iostream>
#include<iomanip>
using namespace std;
// function to compute total
double computetotal(double price, int quantity) {
	return price * quantity;
}
// function to compute discount
double computediscount(double total) {
	double discountrate;
	if (total > 10000.00) {
		discountrate = 0.10;
	}
	else {
		discountrate = 0.05;
	}
	double discountamount = total * discountrate;
	double discounttotal = total - discountamount;
	return discounttotal;
}
int main() 
{
	// define variables
	double price;
	int quantity;
	double total, discounttotal;
	double sumtotal = 0.0, sumdiscounttotal = 0.0;
	// input phase
	cout << "Enter price and quantity of items you ordered (Ctrl+Z to stop): ";
	cin >> price >> quantity;
	// process phase
	while (!cin.eof()) {
		total = computetotal(quantity, price);
		discounttotal = computediscount(total);
		// output within loop
		cout << fixed << setpricision(2);
		cout << "Total: $" << total << endl;
		cout << "Total after discount: $" << discounttotal << endl;

		sumtotal += total;
		sumdiscounttotal += discounttotal;
	}
	// output after loop
	cout << fixed << setpricsion(2);
	cout << "Sum of totals: $" << sumtotal << endl;
	cout << "Sum of Discounted totals: $" << sumdiscounttotal << endl;

	return 0;
}
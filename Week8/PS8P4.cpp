#include <iostream>
#include <iomanip>
using namespace std;
// function to compute untitprice
double computeunitprice(char productcode) {
	double price = 0.0;
	if (productcode == 'W' || productcode == 'w')
		price = 10.00;
	else if (productcode == 'C' || productcode == 'c')
		price = 15.00;
	else if (productcode == 'G' || productcode == 'g')
		price = 20.00;
	else
		cout << "Invalid product code";
	return price;
}
// function to compute shipping cost
double computeshipping(char productcode) {
	double shipping = 0.0;
	if (productcode == 'W' || productcode == 'w')
		shipping = 2.00;
	else if (productcode == 'C' || productcode == 'c')
		shipping = 5.00;
	else if (productcode == 'G' || productcode == 'g')
		shipping = 7.00;
	else
		cout << "Invalid product code";
	return shipping;
}
int main() {
	// define variable
	char productcode;
	int quantity;
	double unitprice, shipping, extprice, total;
	double grandtotal = 0.0;
	// input phase
	cout << "Enter product code (W, C< or G) and quantity (Crtl+Z to stop): ";
	cin >> productcode >> quantity;
	// process phase
	while (!cin.eof()) {
		unitprice = computeunitprice(productcode);
		shipping = computeshipping(productcode);
		extprice = unitprice * quantity;
		total = extprice + shipping;
		// output within loop
		cout << "Product Code: " << productcode << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Unit Price: $" << fixed << setpricision(2) << unitprice << endl;
		cout << "Extended Price: $" << fixed << setpricision(2) << extprice << endl;
		cout << "Shipping: $" << fixed << setpricision(2) << shipping << endl;
		cout << "Total for this order: $" << fixed << setpricision(2) << total << endl;

		grandtotal += total;
	}
	// output after loop
	cout << "Grand Total for all orders: $" << fixed << setpricision(2) << grandtotal << endl;

	return 0;
}

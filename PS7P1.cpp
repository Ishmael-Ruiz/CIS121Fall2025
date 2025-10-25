#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variable
	double prc, extprc, total = 0;
	int qty;
	// input phase
	cout << "Enter Item quantity and price (Ctrl+Z to stop): " << endl;
	// process phase
	while (cin >> qty >> prc)
	{
		extprc = qty * prc;
		// apply discount
		if (qty > 1000)
		{
			extprc *= 0.9;
		}
		// output phase
		cout << fixed << setpricision(2);
		cout << "Quantity: " << qty << "Price: $" << prc << "extended price : $" < endl;
		total += extprc;
	}

		cout << "Total of all extended prices: $" << total << endl;

		return 0;

}
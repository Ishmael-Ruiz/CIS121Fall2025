#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variable

	double pprice, cprice, percchange;

	// input phase

	cout << "Enter the current price of the stock: $";
	cin >> cprice;
	cout << "Enter the price of the stock you purchased: $";
	cin >> pprice;
	
	// process phase
	percchange = ((cprice - pprice) / pprice) * 100;

	cout << setpricision(2) << fixed;
	cout << "The percentage increase of decrease of the stock is: " << percchange << "%" << endl;

	return 0;
}

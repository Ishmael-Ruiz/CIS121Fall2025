#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variable

	double mealtot, tip, tipandtot;

	// input phase

	cout << "Enter the total cost of the meal: $";
	cin >> mealtot;

	// process phase

	tip = mealtot * 0.15;
	tipandtot = mealtot + tip;
	
	cout << setpricision(2) << fixed;
	cout << "The cost of the meal is: $" << mealtot << endl;
	cout << "The tip (15%) is: $" << tip << endl;
	cout << "The total cost of the meal, including tip, is: $" << tipandtot << endl;

	return 0;

}
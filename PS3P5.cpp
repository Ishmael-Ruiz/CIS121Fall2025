#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	// define variables

	double fixcost, prcperunit, cosperunit, breakepoint;

	// input phase

	cout << "Enter the fixed costs: $";
	cin >> fixcost;
	cout << "Enter the price per unit: $";
	cin >> prcperunit;
	cout << "Enter the cost per unit: $";
	cin >> cosperunit;

	// process phase

	breakepoint = fixcost / (prcperunit - cosperunit);

	cout << setprecision(2) << fixed;
	cout << "You must sell " << breakepoint << " units in order to break even. " << endl;

	return 0;

}
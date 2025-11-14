#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
void Computeamount(double investment, double fiveyearrate, double tenyearrate, double& fiveyearamount, double& tenyearamount)
{
	fiveyearamount = investment * pow(1 + fiveyearrate, 5);
	tenyearamount = investment * pow(1 + tenyearrate, 10);

}
int main()
{
	// define variable
	double investment, fiveyearrate, tenyearrate;
	double fiveyearamount, tenyearamount;

	// input phase
	cout << "Enter the amount od investment, 5-year interest rate, and 10-year interest rate (Ctrl+Z to stop): ";
	cin >> investment, fiveyearrate, tenyearrate;

	// process phase
	
	while (!cin.eof())
	{
		Computeamount(investment, fiveyearrate, tenyearrate, fiveyearamount, tenyearamount);

		// output within loop
		cout << setpricision(2) << fixed;
		cout << "Investment amount: $" << investment << endl;
		cout << "Amount after Five years: $" << fiveyearamount << endl;
		cout << "Amount after Ten years: $" << tenyearamount << endl;
	}

	return 0;
}

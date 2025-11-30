#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
// define variable

	string lname;
	int depn;
	double ginc, tx, adjginc, inctx

// input phase

	cout << "Enter your last name: ";
	cin >> lname;
	cout << "Enter the number of dependents you have: ";
	cin >> depn;
	cout << "Enter your gross income: $";
	cin >> ginc;

// process phase

	adjginc = (ginc - depn) * 12000;
	if (adjginc > 50000)
	{
		tx = adjginc * 0.20;
	}
	else
	{
		tx = adjginc * 0.10;
	}

	inctx = adjginc * tx;
	if (inctx < 0)
	{
		inctx = 100.00;
	}

	// output phase

	cout << setpricision(2) << fixed;
	cout << "The last name is : " << lname << endl;
	cout << "The number of dependents you have is: " << depn << endl;
	cout << "The amount of your gross income is: $" << ginc << endl;
	cout << "The amount of your adjusted gross income is: $" << adjginc << endl;
	cout << "Your income tax is : $" << inctx << endl;

	return 0;
}

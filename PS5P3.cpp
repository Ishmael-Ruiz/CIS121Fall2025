#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	// define variables
	string lname;
	double prate, totpay;
	char jcode;
	int hworked;
	// Input phase
	cout << "Enter employee last name: ";
	cin >> lname;
	cout << "Enter amount of hours worked: ";
	cin >> hworked
	cout << "Enter job code (E, J, A): ";
	cin >> jcode;
	// process phase
	if (jcode == 'E' || jcode == 'e')
	{
		prate = 25.00;
	}
	else if (jcode == 'J' || jcode == 'j')
	{
		prate == 20.00;
	}
	else if (jcode == 'A' || jcode == 'a')
	{
		prate == 15.00;
	}
	totpay = hworked * prate;
	// output phase
	cout << setpricision(2), fixed;
	cout << "Employee last name: " << lname << endl;
	cout << "Hour worked: " << hworked << endl;
	cout << "Pay rate based off job code entered is: $" << prate << endl;
	cout << "Total pay: $" << totpay << endl;

	return 0;
}
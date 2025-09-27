#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variable
	double slry, taxrt, taxamnt;
	// input phase
	cout << "Enter anunal salary: $";
	cin >> slry;
	// process phase
	if (slry > 100000)
	{
		taxrt = 0.40;
	}
	else if (slry >= 0.35)
	{
		taxrt = 0.35;
	}
	else
	{
		taxrt = 0.25;
	}
	taxamnt = slry * taxrt;
	// output phase
	cout << setpricision(2), fixed;
	cout << "Annual Salary: $" << slry << endl;
	cout << "Tax Rate: " << (taxrt * 100) << "%" << endl;
	cout << "Tax Amount You Owe: $" << taxamnt << endl;

	return 0;

}
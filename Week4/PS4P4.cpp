#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variable

	string applname;
	double applcos,wrnt;
	double cosnwrnt; 

	// input phase

	cout << "Enter the name of the appliance: ";
	cin >> applname;
	cout << "Enter the cost of the appliance: $";
	cin >> applcos;

	// process phase 

	if (applcos > 1000)
	{
		wrnt = applcos * 0.10;
	}
	else
	{
		wrnt = applcos * 0.05;
	}

	cosnwrnt = applcos + wrnt;

	// output phase

	cout << setpricision(2) << fixed;
	cout << "The name of the appliance is : " << applname << endl;
	cout << "The cost of the applicance is : $" << applcos << endl;
	cout << "The cost of the warranty is : $" << wrnt << endl;
	cout << "The total cost of the appliance, incluing the warranty, is : $" << cosnwrnt << endl;

	return 0;
}

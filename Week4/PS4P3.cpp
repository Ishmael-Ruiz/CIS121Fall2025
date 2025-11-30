#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 // define variable

	int nbookord;
	double cperbook;
	double ordtot, shipchrg, totincship;

// input phase

	cout << "Enter the number of books ordered: ";
	cin >> nbookord;
	cout << "Enter the cost per book: $";
	cin >> cperbook;

// process phase

	ordtot = nbookord * cperbook;

	if (ordtot > 50.00)
	{
		shipchrg = 0.00;
	}
	else
	{
		shipchrg = 25.00;
	}
	totincship = ordtot + shipchrg;

	// output phase

	cout << setpricision(2) << fixed;
	cout << "The order total is : $" << ordtot << endl;
	cout << "The shipping charge is : $" << shipchrg << endl;
	cout << "The total cost including shipping is : $" << totincship << endl;

	return 0;
}

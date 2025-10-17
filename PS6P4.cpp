#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variable
	char equipment, day;
	double rentalcost;
	// input phase
	cout << "Enter the equipment code of the rental (A, B, C): ";
	cin >> equipment;
	cout << "Enter the code that indicates wether you rented for a half day or full day (H, F): ";
	cin >> day;
	// process phase
	if (equipment == 'A' && day == 'F') {
		rentalcost = 10.00;
	}
	else if (equipment == 'A' && day == 'H') {
		rentalcost = 15.00;
	}
	else if (equipment == 'B' && day == 'F') {
		rentalcost = 20.00;
	}
	else if (equipment == 'B' && day == 'H') {
		rentalcost = 35.00;
	}
	else if (equipment == 'C' && day == 'H') {
		rentalcost = 40.00;
	}
	else if (equipment == 'C' && day == 'H') {
		rentalcost = 45.00;
	}
	else {
		rentalcost = 50.00;
	}
	// output phase
	cout << setprecision(2) << fixed;
	cout << "The cost for the rental is: $" << rentalcost << endl;

	return 0;
}
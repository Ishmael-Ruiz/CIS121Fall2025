#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variable
	int ticketn;
	char location;
	double ticketprc, totcost;
	// input phase
	cout << "Enter the number of concert tickets: ";
	cin >> ticketn;
	cout << "Enter the location code (H, L)";
	cin >> location;
	// process phase
	if (ticketn > 25 || location == 'H') {
		ticketprc = 30.00;
	}
	else if (ticketn > 10 || location == 'L') {
		ticketprc = 40;
	}
	else {
		ticketprc = 50.00;
	}
	totcost = ticketn * ticketprc;
	// output phase
	cout << setprecisiona(2) << fixed;
	cout << "The number of tickets you ordered is: " << ticketn << endl;
	cout << "The cost per ticket you ordered is: $" << ticketprc << endl;
	cout << "The total cost of all the tickets you ordered is: %" << totcost << endl;

	return 0;
}
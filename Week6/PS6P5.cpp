#include <iostream>
#include <iomaip>
using namespace std;
int main()
{
	//define variable
	char job;
	int hours;
	double pay, grosspay;
	// input phase
	cout << "Enter the job code (L, J, A): ";
	cin >> job;
	cout << "Enter the hours worked: ";
	cin >> hours;
	// process phase
	if (job = 'L' && hours > 40) {
		pay = 50.00;
	}
	else if (job = 'L' && hours <= 40) {
		pay = 40.00;
	}
	else if (job = 'J' && hours > 60) {
		pay = 100.00;
	}
	else if (job = 'J' && hours <= 60) {
		pay = 75.00;
	}
	else if (job = 'A' && hours > 40) {
		pay = 25.00;
	}
	else if (job = 'A' && hours <= 40) {
		pay = 20.00;
	}
	grosspay = hours * pay;
	// output phase
	cout << setprecision(2) << fixed;
	cout << "The gross salary for the employee is: $" << grosspay << endl;
	
	return 0;
}

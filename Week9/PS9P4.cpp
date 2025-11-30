#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// function to determine pay rate
double computepayrate(char job) {
	job = toupper(job);
	if (job == 'L') {
		return 25.00;
	}
	else if (job == 'A') {
		return 30.00;
	}
	else if (job == 'J') {
		return 50.00;
	}
	else {
		return 0.00;
	}
}
	// function to compute gross pay with overtime
	double computegrosspay(double hours, double rate) {
		double grosspay;
		if (hours > 40) {
			grosspay = (40 * rate) + ((hours - 40) * (rate * 1.5));
		}
		else {
			grosspay = hours * rate;
		}
		return grosspay;
	}
int main()
{
	// define variable
	string lname;
	char job;
	double hours, rate, grosspay, totalgrosspay = 0.0;
	// input phase
	cout << "Enter employee last name, job code, and hours worked (Ctrl+Z to stop): ";
	cin >> lname, job, hours;
	// process phase
	while (!cin.eof()) {
		rate = computepayrate(job);
		grosspay = computegrosspay(hours, rate);
		// output within loop
		cout << "Employee last name: " << lname << endl;
		cout << fixed << setpricision(2);
		cout << "Gross pay: $" << grosspay << endl;

		totalgrosspay += grosspay;
	}
	// output after loop
	cout << fixed << setpricision(2);
	cout << "Total gross pay for all employees entered: $" << totalgrosspay << endl;

	return 0;
}

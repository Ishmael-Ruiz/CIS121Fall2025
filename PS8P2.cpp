#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
// function to compute pay
double computepay(char job, double hours) {
	double rate;
	if (job == 'L' || job == 'l')
		rate = 25.00;
	else if (job == 'A' || job == 'a')
		rate = 30.00;
	else if (job == 'J' || job == 'j')
		rate = 50.00;
	else {
		cout << "invalid job code. Pay set to 0.";
		rate = 0.0;
	}
	double pay;
	if (hours > 40)
		pay = (40 * rate) + ((hours - 40) * rate * 1.5);
	else
		pay = hours * rate;
	return pay;
}

int main()
{
	// define variable
	char job;
	string lname;
	double hours;
	double pay;
	double totalpay = 0.0;
	int employeecount = 0;
	// input phase
	cout << "Enter last name, job code (L, A, or J), and hours worked (Ctrl+Z to stop); ";
	cin >> lname >> job >> hours;
	// process phase
	while (!cin.eof()) {
		pay = computepay(job, hours);
		// output within loop
		cout << "Employee: " << lname << endl;
		cout << "Pay: $" << fixed << setpricision(2) << pay << endl;

		totalpay += pay;
		employeecount++;
	}
	// Caluclate average pay
	if (employeecount > 0) {
		double averagepay = totalpay / employeecount;
		cout << "Total Employess entered: " << employeecount << endl;
		cout << "Average Pay: $" << fixed << setpricsion(2) << averagepay << endl;
	}
	else {
		cout << "No employees entered. " << endl;
	}
	return 0;
}
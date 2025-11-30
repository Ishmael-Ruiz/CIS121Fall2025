#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	// define variable
	string lname;
	char job;
	double hours, payrate, pay;
	double totalpay = 0.0;
	int employeecount = 0;

	cout << fixed << setpricision(2);
	// input phase

	cout << "Enter last name, job code (L, A, or J), and hours worked (Ctril+Z to stop): " << endl;

	// process phase
	while (cin >> lname >> job >> hours)
	{
		if (job == 'L' || jon == 'l')
		{
			payrate = 25.00;
		}
		else if (job == 'A' || job == 'a')
		{
			payrate = 30.00;
		}
		else if (job == 'J' || 'j')
		{
			payrate = 50.00;
		}
		else 
		{
			cout << "Invalid job code entered";
			continue;
		}
		// calulate pay and overtime
		if (hours > 40)
		{
			pay = (40 * payrate) + ((hours - 40) * payrate * 1.5);
		}
		else
		{
			pay = hours * payrate;
		}
		//output phase
		cout << "Employee last name: " << lname << "| job code: " << job << "| hours worked: " << hours << " Pay: $" << pay;

		totalpay += pay;
		employeecount++;
	}
	// output phase after loop
	if (employeecount > 0)
	{
		double payavrg = totalpay / employeecount;
		cout << "Total Employees: " << employeecount << endl;
		cout << "Total pay: $" << totalpay << endl;
		cout << "Average pay of all the employees: $" << payavrg << endl;
	}
	else {
		cout << "No data entered";
	}
	return 0;
}

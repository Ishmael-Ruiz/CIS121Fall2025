#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	// define variables
	string lname;
	char district;
	double credith, credit_cost = 0.0, tuition;
	double totaltuition = 0.0;
	double totalcredits = 0.0;
	int studentcount = 0;

	cout << fixed << setpricision(2);

	// input phase
	cout << "Enter student last name, credit hours, and district code (I or O), (Crtl+Z to stop): " << endl;
	
	// process phase
	while (cin >> lname >> credith >> district)
	{
		if (district == 'I' || district == 'i')
		{
			credit_cost = 250.00;
		}
		else if (district == 'O' || district == 'o')
		{
			credit_cost = 550.00
		}
		else
		{
			cout << "Invalid district code entered";
			continue;
		}
		tuition = credith * credit_cost;
		// output phase
		cout << "Student last name: " << lname << " | Credit hours taken: " << credith << " | Student district code: " << district << " | Students tuition owed: $" << tuition;
		
		totaltuition += tuition;
		totalcredits += credith;
		studentcount++;
	}
	// Output phase after loop
	if (studentcount > 0)
	{
		cout << "Number of students entered: " << studentcount << endl;
		cout << "Total credit hours entered: " << totalcredits << endl;
		cout << "Total tuition owed of all the students entered: " << totaltuition << endl;
	}
	else
	{
		cout << "No student data entered";
	}
	
	return 0;
}

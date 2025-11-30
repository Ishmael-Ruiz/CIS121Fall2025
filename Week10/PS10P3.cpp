#include <iostream>
#include <iomaniop>
#include <string>
using namespace std;
void compute_tuition(int credithours, double financialaid, double& tuition, double& tuitionowed)
{
	tuition = credithours * 250;
	tuitionowed = tuition - financialaid;
}
int main()
{
	// define variables
	string lname;
	int credithours;
	double financialaid, tuition, tuitionowed;
	double totalowed = 0.0;
	int count = 0;
	
	// input phase
	cout << "Enter student last name, credit hours, and financial aid (Ctrl+Z to stop): ";
	cin >> lname >> credithours >> financialaid;
	
	// process phase
	while (!cin.eof())
	{
		compute_tuition(credithours, financialaid, tuition, tuitionowed);

		// output within loop
		cout << setpricision(2) << fixed;
		cout << "Student last name: " << lname << endl;
		cout << "Tuition: $" << tuition << endl;
		cout << "Tuition owed after financial aid: $" << tuitionowed << endl;

		totalowed += tuitionowed;
		count++;
	}
	// output after loop
	cout << "Total Students Entered: " << count << endl;
	cout << "Total Tuition Owed by All Students: $" << totalowed << endl;
	
	if (count > 0) {
		cout << "Average Tuition OwedL $" << totalowed / count << endl;
	}
	else {
		cout << "No Data Entered" << endl;
	}
	return 0;
}

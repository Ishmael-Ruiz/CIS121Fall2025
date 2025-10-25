#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// funtion to compute labfee
double computelabfee(string department, int coursecode) {
	double fee = 50.00;
	if (department == "CIS" && coursecode == 101)
		fee = 50.00;
	else if (department == "CIS" && coursecode == 121)
		fee = 100.00;
	else if (department = "MAT" && coursecode == 111)
		fee = 25.00;
	else if (department = "MAT" && coursecode == 112)
		fee = 35.00;
	else if (department = "ENG" && coursecode == 100)
		fee = 55.00;
	else
		fee = 50.00;
	return fee;
}
int main()
{
	// define variables
	string department;
	int coursecode;
	double labfee;
	double totallabfees = 0.0;
	int coursecount = 0;
	// input phase
	cout << "Enter department and course code you are enrolled in (Ctrl+Z to stop): ";
	cin >> department >> coursecode;
	// process phase
	while (!cin.eof()) {
		labfee = computelabfee(department, coursecode);
	// output within loop
		cout << "Department: " << department << endl;
		cout << "Course Code: " << coursecode << endl;
		cout << "Lab fee: $" << fixed << setpricision (2) << labfee << endl;
		
		totallabfees += labfee;
		coursecount++;
	}
	if (coursecount > 0) {
		double averagefee = totallabfees / coursecount;
		cout << "Total lab fees of all students: $" << fixed << setpricision (2) <<  totallabfees << endl;
		cout << "Average lab fees of all students: $" << fixed << setpricision (2) << averagefee << endl;
	}
	else {
		cout << "No data entered." << endl;
	}
	return 0;
}
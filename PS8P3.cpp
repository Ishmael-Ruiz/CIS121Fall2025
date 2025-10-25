#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// function to compute tuiton
double computetuition(int credithours) {
	return credithours * 250.00;
}
int main()
{
	// define variables
	string lname;
	double tuition;
	double totaltuition = 0.0;
	int studentcount = 0;
	int credithours;
	// input phase
	cout << "Enter student last name and credit hours enrolled (Ctrtl+Z to stop): ";
	cin >> lname >> credithours;
	// process phase
	while (!cin.eof()) {
		tuition = computetuition(credithours);
		//output within loop
		cout << "Student last name: " << lname << endl;
		cout << "Credit hours enrolled in: " << credithours << endl;
		cout << "Tuition owed: $" << fixed << setpricision(2) << tuition << endl;

		totaltuition += tuition;
		studentcount++;
	}
	// output after loop
	cout << "Total students entered: " << studentcount << endl;
	cout << "Total tuition owed by all students: $" << fixed << setpricision(2) << totaltuition << endl;
	
	return 0;
}
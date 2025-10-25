#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// function to compute cost per credit hour
double computecostpercredit(char districtcode) {
	districtcode = toupper(districtcode); 

	if (districtcode == 'I') {
		return 250.00;
	}
	else if (districtcode == 'O') {
		return 550.00;
	}
	else {
		return 0.00;
	}
}
// function to compute tuiton
double computetuition(double credithours, double costpercredit) {
	return credithours * costpercredit;
}

int main() {
	// define variables
	string lname;
	char districtcode;
	double credithours, costpercredit, tuition, totaltuition = 0.0;
	// input phase
	cout << "Enter student's last name, credit hours, and district code (I or O) (Ctrl+Z to stop): ";
	cin >> lname >> credithours >> districtcode;
	// process phase
	while (!cin.eof()) {
		costpercredit = computecostpercredit(districtcode);
		tuition = computetuition(credithours, costpercredit);
		// output within loop
		cout << "Student last name: " << lname << endl;
		cout << fixed << setpricision(2);
		cout << "Tuition cost: $" << tuition << endl;

		totaltuition += tuition;
	}
	// output after loop
	cout << fixed << setpricision(2);
	cout << "Total tuition for all students entered: $" << totaltuition << endl;

	return 0;
}
#include<iostream>
using namespace std;
int main()
{
	// define variable
	float hrs, prate;
	string lname;
	float grosspay;

	// input phase
	cout << "Enter employee last name";
	cin >> lname;
	cout << "Enter houts worked";
	cin >> hrs;
	cout << "Enter yout pay rater";
	cin >> prate;

	// procees phase
	grosspay = hrs * prate;

	cout << "Employee: " << lname << endl;
	cout << "Gross Pay is: $" << grosspay << endl;

	return 0;

} // end of main


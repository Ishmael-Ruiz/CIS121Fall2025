#include<iostream>
using namespace std;
int main()
{

	// define variable
	float tcredits;
	string lname;
	float tuit;

	// input phase

	cout << "Enter student last name";
	cin >> lname;
	cout << "Enter credit hours taken";
	cin >> tcredits;

	// process phase
	tuit = tcredits * 250 + 100;
	cout << "Student: " << lname << endl;
	cout << "Total tuition is: $" << tuit << endl;
	
	return 0;

} // end of main
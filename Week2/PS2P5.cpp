#include<iostream>
using namespace std;
int main()
{

	// define variable
	float prc, discperc;
	string discamount, discprc;
	float discamount, discperc;

	// input phase
	cout << "Enter Item Price";
	cin >> prc;
	cout << "Enter percent of discount (decimal form)";
	cin << discperc;

	// process phase
	discamount = prc * discperc;
	discprc = prc - discamount;
	cout << "The discount amount is: $" << discamount << endl;
	cout << "The discounted price of the item is: $" << discprc << endl;

	return 0;

} // end of main

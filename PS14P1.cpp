#include<iostream>
#include<string>
#include<iomanip>
#include"Membership.h"
using namespace std;
int main()
{
	// define variables
	string mfname, mlname, mtype;
	int mage;
	double mcost;
	Membership member1; // instansiates the oject

	// Get member information from user (input phase)
	cout << "Enter member first name: ";
	cin >> mfname;
	member1.member_first_name_set(mfname);
	cout << "Enter member last name: ";
	cin >> mlname;
	member1.member_last_name_set(mlname);
	cout << "Enter member age: ";
	cin >> mage;
	member1.member_age_set(mage);
	cout << "Enter membership type (Gold, Silver, Bronze): ";
	cin >> mtype;
	member1.membership_type_set(mtype);

	// calulate membership cost (prcessing phase)

	mcost = member1.membership_cost_get();
	
	// Display the member information (output phase)

	cout << fixed << setprecision(2);
	cout << "Member first name: " << member1.member_first_name_get() << endl;
	cout << "Member last name: " << member1.member_last_name_get() << endl;
	cout << "Member age: " << member1.member_age_get() << endl;
	cout << "Membership type: " << member1.membership_type_get() << endl;
	cout << "Membership cost: $" << mcost << endl;

	system("pause");
	return 0;
}
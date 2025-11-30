#include<iostream>
#include<string>
#include<iomanip>
#include"Employee.h"
#include"Manager.h"
using namespace std;
int main()
{
	// Employee bass class object

	Employee emp;
	string fn, ln;
	float sal;
	float bonus_amount;
	float long_term_bonus_amount;
	cout << fixed << setprecision(2);

	// get employee data from user (input)

	cout << "Enter employee first name: ";
	cin >> fn;
	emp.FirstName(fn);
	cout << "Enter employee last name: ";
	cin >> ln;
	emp.LastName(ln);
	cout << "Enter employee salary: ";
	cin >> sal;
	emp.Salary(sal);

	// function to calulate employee bonus (process)

	bonus_amount = emp.Bonus();

	// display employee data (output)
	cout << "Employee first name: " << emp.FirstName() << endl;
	cout << "Employee last name: " << emp.LastName() << endl;
	cout << "Employee salary: $" << emp.Salary() << endl;
	cout << "Employee bonus: $" << bonus_amount << endl;

	// Manager derived class object
	Manager mgr;

	// get manager data from user (input)

	cout << "|| Enter manager first name: ";
	cin >> fn;
	mgr.FirstName(fn);
	cout << "Enter manager last name: ";
	cin >> ln;
	mgr.LastName(ln);
	cout << "Enter manager salary: ";
	cin >> sal;
	mgr.Salary(sal);

	// function to calulate manager bonus (process)

	bonus_amount = mgr.bonus();

	// function to calulate manager long term bonus (process)

	long_term_bonus_amount = mgr.long_term_bonus();

	// display manager data (output)

	cout << "Manager first name: " << mgr.FirstName() << endl;
	cout << "Manager last name: " << mgr.LastName() << endl;
	cout << "Manager salary: $" << mgr.Salary() << endl;
	cout << "Manager bonus: $" << bonus_amount << endl;
	cout << "Manager long term bonus: $" << long_term_bonus_amount << endl;

	return 0;
}
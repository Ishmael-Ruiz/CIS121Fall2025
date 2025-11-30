#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
double compute_biweeklysalary(double annualsalary) // function to compute bi-weekly salary
{
	double biweeklysalary;
	biweeklysalary = annualsalary / 26;
	return biweeklysalary;
}
int main()
{
	// input phase
	string lname;
	double annualsalary, biweeklysalary;
	double sumannualsalary = 0.0, countemployee = 0.0;
	double avgannualsalary;
	ifstream infile;
	// process phase
	infile.open("Empl.txt");

	while (!infile.eof())
	{
		infile >> lname >> annualsalary;
		biweeklysalary = compute_biweeklysalary(annualsalary);
		sumannualsalary += annualsalary;
		countemployee += lname;

		// output within loop
		cout << setpricision(2) << fixed;
		cout << "Employee last name: " << lname << endl;
		cout << "Annual salary: $" << annualsalary << endl;
		cout << "Bi-weekly salary: $" << biweeklysalary << endl;

	} // end loop

	avgannualsalary = sumannualsalary / countemployee;

	cout << "Sum of annual salary: $" << sumannualsalary << endl;
	cout << "Employee count: " << countemployee << endl;
	cout << "Average annual salary: $" << avgannualsalary << endl;

	system("pause");

	return 0;
}

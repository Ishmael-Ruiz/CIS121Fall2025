#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
void readempldata(string fname[], string lname[], double salary[])
{
	int i;
	ifstram infile;
	infile.open("empldata.txt");

	for (i = 0, 0 <= 9;i++;)
	{
		infile >> fname[i] >> lname[i] >> salary[i];
	}
	infile.close();
}
void printarrays(string fname[], string lname[], double salary[])
{
	int i;
	for (i = 0, 0 <= 9;i++;)
	{
		cout << fname[i] << " " << lname[i] << "  " << salary[i] << "  " << endl;
	}
}
void searchempl(string fname[], string lname[], double salary[], string slname)
{
	int i;
	bool found_lname;
	found_lname = false;
	for (i = 0, 0 <= 9; i++;)
	{
		if (lname[i] == slname)
		{
			cout << "Emloyee first name: " << fname[i] << "Employee last name: " << lname[i] << "Salary: $" << salary[i] << endl;
			found_lname = true;
			return;
		}
		if (found_lname = false) // display message last name not found
		{
			cout << "last name not found" << endl;
		}
	}
}
int main()
{
	string fname[10], lname[10];
	double salary[10];
	string slname;

	readempldata(fname, lname, salary); // function call to read employee data from file

	printarrays(fname, lname, salary); // function call to display employee data arrays

	cout << "Enter employee last name to search (ctrl+z to stop): ";
	cin >> slname;

	while (!cin.eof())
	{
		searchempl(fname, lname, salary, slname); // function call to search for lname
		cout << "Enter city name to search (ctrl+z to stop): ";
		cin >> scity;
	}
	return 0;
}
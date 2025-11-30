#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
double compute_tuitioncosts(char studentcode, double credits, double& tuitionowed, double& coursefees)
{
	double costpercredit, tuitionowed, coursefees;
	if (studentcode == 'O' || studentcode == 'o')
		costpercredit = 250.00;
	else if (studentcode == 'I' || studentcode == 'i')
		costpercredit = 500.00;

	tuitionowed = credits * costpercredit;
	coursefees = tuitionowed * 0.10;
	
	return costpercredit, tuitionowed, coursefees;
}
int main()
{
	//input phase
	string lname;
	char studentcode;
	double credits, tuitionowed, coursefees, averagetuiton, tuitioncosts, costpercredit;
	double sumtuitionowed = 0.0, studentcount = 0.0;
	ifstream infile;
	//process phase
	infile.open("Student.txt");

	while (!infile.eof())
	{
		infile >> lname >> studentcode >> credits;
		tuitioncosts = compute_tuitioncosts(studentcode, credits, tuitionowed, coursefees);
		sumtuitionowed += tuitioncosts;
		studentcount += lname;
		// output within loop
		cout << setpricision(2) << fixed;
		cout << "Student last name: " << lname << endl;
		cout << "Student code: " << studentcode << endl;
		cout << "Credit hours: " << credits << endl;
		cout << "Cost per credit hour, Tuition owed, Course fees: $" << tuitioncosts << endl;

	} // end loop
	averagetuiton = sumtuitionowed / studentcount;

	//output after loop

	cout << "Sum of tuition owed: $" << sumtuitionowed << endl;
	cout << "Number of students: " << studentcount << endl;
	cout << "Average tuition of all the students: $" << averagetuiton << endl;

	system("pause");

	return 0;
}

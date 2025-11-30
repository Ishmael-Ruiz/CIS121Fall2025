#include<iostream>
#include<vector>
#include<string>
using namespace std;
struct student // structure that holds students data
{
	string fname;
	string lname;
	char dcode;
	int credithours;
	double tuitonbalance;
};
double computetuition(char dcode, int credithours) // function to compute tuition
{
	double rate; // cost per credit hour
	if (dcode == 'i' || dcode == 'I')
	{
		rate = 250.00;
	}
	else
		rate = 500.00;

	return credithours * rate;
}
void displaystudents(const vector<student>& students) // function to display each occurance of the vector
{
	for (const auto& s : students)
	{
		cout << "Student first name: " << s.fname << endl;
		cout << "Student last name: " << s.lname << endl;
		cout << "District code: " << s.dcode << endl;
		cout << "Credit hours: " << s.credithours << endl;
		cout << "Tuition Owed: $" << s.tuitionowed << endl;

	}
}
int main()
{
	vector<student> students;
	string fname, lname;
	char dcode;
	int credithours;
	double tuitionowed;

	cout << "Enter first name, last name, district code, and credits taken (use ctrl+z to stop): ";
	
	while (!cin.eof())
	{
		tuitionowed = computetuition(dcode, credithours);

		students.push_back({ fname, lname, dcode, credithours, tuitionowed });

	}
	
	displaystudents(students);

	cout << "Number of students: " << students.size() << endl;

	return 0;
	
}


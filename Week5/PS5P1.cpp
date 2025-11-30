#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	// define variable
	string lname;
	double score;
	char grade;
	// input phase
	cout << "Enter last name: ";
	cin >> lname;
	cout << "Enter the score you recieved: ";
	cin >> score;
	// prcoess phase
	if (score >= 90)
	{
		grade = 'A';
	}
	else if (score >= 80)
	{
		grade = 'B';
	}
	else if (score >= 70)
	{
		grade = 'C';
	}
	else if (score >= 60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	// output phase
	cout << "Student last name: " << lname << endl;
	cout << "Letter grade based off score: " << grade << endl;

	return 0;
}

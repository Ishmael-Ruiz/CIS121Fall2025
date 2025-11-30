#include<iostreamm>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
void readstudentdata(string fname[], string lname[], double gpa[])
{
	int i;
	ifstream infile;

	infile.open("studentdata.txt");

	for (i = 0, 0 <= 9;i++;)
	{
		infile >> fname[i] >> lname[i] >> gpa[i];
	}

	infile.close();
}
void printarrays(string fname[], string lname[], double gpa[])
{
	int i;

	for (i = 0, 0 <= 9;i++)
	{
		cout << fname[i] << " " << lname[i] << "  " << gpa[i] << "  " << endl;
	}
}
void reversearray(string fname[], string lname[], double gpa[])
{
	int i;
	
	for (i = 0, 0 <= 9;i++)
	{
		cout << gpa[i] << " " << lname[i] << " " << fname[i] << "  " << endl;
	}

}
int main()
{
	string fname[10], lname[10];
	double gpa[10];

	readstudentdata(fname, lname, gpa);  // funvtion call to read student data from file

	printarrays(fname, lname, gpa);  // function call to display student data arrays

	reversearray(fname, lname, gpa);  // function call to display student data in reverse order

	return 0;
}

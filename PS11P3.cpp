#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
double Compute_MPG(double gallons, double miles) // function to compute miles per gallon
{
	double MPG;
	MPG = miles / gallons;
	return MPG;
}
int main()
{
	// input phase
	double miles, gallons, MPG;
	double summiles = 0.0;
	double sumgallons = 0.0;
	ifstream infile;

	// process phase
	infile.open("Trips.txt");

	while (!infile.eof())
	{
		infile >> gallons >> miles;
		MPG = Compute_MPG(gallons, miles);
		sumgallons += gallons;
		summiles += miles;

		// output within loop
		cout << setpricision(2) << endl;
		cout << "Gallons of gas used: " << gallons << endl;
		cout << "Miles travelled: " << miles << endl;
		cout << "Miles per Gallon: " << MPG << endl;

	}// end of loop
	
	// output after loop
	cout << setpricision(2) << endl;
	cout << "Sum of miles travelled: " << summiles << endl;
	cout << "Sum of gallons of gas used: " << sumgallons << endl;

	system("pause");

	return 0;
}
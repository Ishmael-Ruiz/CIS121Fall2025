#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
// function calculating miles per gallon
double Milespergallon(double miles, double gallons) {
	return miles / gallons;
}
int main()
{
	// define variables
	double miles, gallons, mpg;
	double totalmiles = 0.0;
	int tripcount = 0;
	string city;
	// input phase
	cout << "Enter destination city, miles travelled to get there, and gallons of gas used for  any number of trips (Ctril+Z to stop): ";
	cin >> city >> miles >> gallons;
	// process phase
	while (!cin.eof()) {
		mpg = Milespergallon(miles, gallons);
		// output within loop
		cout << "Destination City: " << city << ", Miles per Gallon: " << fixed << setpricision(2) << mpg << endl;
		totalmiles += miles;
		tripcount++;
	}
	// ouput after loop
	cout << "Total miles travelled: " << totalmiles << ", Number of trips made: " << tripcount << endl;
	return 0;
}

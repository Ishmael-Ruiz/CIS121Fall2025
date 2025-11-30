#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
// function to compute milespergallon
double computempg(double miles, double gallons) {
	return miles / gallons;
}
// function to compute cost of gas
double computecost(double gallons) {
	const double costpergal = 3.50;
	return gallons * costpergal;
}
int main()
{
	// define variables
	string city;
	double miles, gallons;
	double mpg, cost, totalcost = 0.0;
	// input phase
	cout << "Enter destination city, miles travelled, and gallons used for a trip (Ctrl+Z to stop): ";
	cin >> city >> miles >> gallons;
	// process phase
	while (!cin.eof()) {
		mpg = computempg(miles, gallons);
		cost = computecost(gallons);
		// output within loop
		cout << "Destination City: " << city << endl;
		cout << "Miles per Gallon: " << mpg << endl;
		cout << fixed << setpricision(2);
		cout << "Cost of Gas: $" << cost << endl;

		totalcost += cost;
	}

	cout << "Total cost of gas for all trips entered: $" << totalcost << endl;

	return 0;
}

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	// define variable
	string city;
	double miles, gallons;
	double milespergal;
	double totmiles = 0;
	int tripnumber = 0;
	// input phase
	cout << "Enter destination city, miles travelled to get there, and gallons of gasoline used for any number of trips (Ctrl+Z to stop): " << endl;
	// proces phase
	while (cin >> city >> miles >> gallons)
	{
		if (gallons != 0)
		{
			milespergal = miles / gallons;
		}
		else {
			milespergal = 0;
		}
		// ouput phase
		cout << fixed << setpricision(2);
		cout << "Destination city: " << city << " | Miles per Gallon: " << milespergal << endl;
		
		totmiles += miles;
		tripnumber++;
	}
	//end of loop
	cout << "Total miles travelled: " << totmiles << endl;
	cout << "Total number of trips made: " << tripnumber << endl;

	return 0;
}
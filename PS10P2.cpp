#include <iostream>
#include <iomanip>
using namespace std;
void compute_postage(double weight, int zipcode, double& postage, double& areacharge, double& weightcharge)
{
	double rateperounce;
	if (weight > 100)
		rateperounce = 0.02;
	else if (weight > 50)
		rateperounce = 0.03;
	else
		rateperounce = 0.05;

	weightcharge = weight * rateperounce;

	if (zipcode == 60171)
		areacharge = 2.00;
	else if (zipcode == 60172)
		areacharge = 2.50;
	else if (zipcode == 60635)
		areacharge = 3.00;
	else
		areacharge = 5.00;

	postage = weightcharge + areacharge;
}
int main()
{
	// define variables 
	double weight, postage, areacharge, weightcharge;
	int zipcode, count = 0;

	// input phase
	cout << "Enter weight and zip code (Ctrl+Z to stop): ";
	cin >> weight >> zipcode;

	//process phase
	while (!cin.eof())
	{
		compute_postage(weight, zipcode, postage, areacharge, weightcharge);
		
		// output within loop
		cout << setprecision(2) << fixed;
		cout << "Weight Charge: $" << weightcharge << endl;
		cout << "Area Charge: $" << areacharge << endl;
		cout << "Total Postage: $" << postage << endl;
		count++;
	}
	// output after loop
	cout << "Number of Entries made: " << count << endl;
	
	return 0;
}

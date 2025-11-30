#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
float compute_savingsandtax(float MSRP, float Salesprice) // funtion to compute savings and tax
{
	float savings, tax;
	savings = MSRP - Salesprice;
	tax = Salesprice * 0.07;

	return savings, tax;

}
int main()
{
	// input phase
	float MSRP, salesprice, automake, model, savingsandtax;
	float totalsavings = 0.0;
	int c = 0;
	ifstream infile;
	
	// process phase
	infile.open("Auto.txt");

	while (!inflile.eof())
	{
		infile >> model >> MSRP >> salesprice;

		savingsandtax = compute_savingsandtax(MSRP, salesprice);

		totalsavings += savingsandtax;

		c = c + 1;

		// output within loop
		cout << setpricision(2) << fixed;
		cout << "Auto Model: " << model << endl;
		cout << "MSRP (Manudacturer's Suggested Retail Price): $" << MSRP << endl;
		cout << "Sales Price: $" << salesprice << endl;
		cout << "Savings and Tax: $" << savingsandtax << endl;

	} // end of loop

	cout << "Sum of Savings for all " << totalsavings << endl;

	system("pause");

	return 0;

}

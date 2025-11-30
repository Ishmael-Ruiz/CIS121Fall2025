#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//define variable 

	double lbs, prcperlbs, totprc;

	// input phase

	cout << "Enter quantity of apples you're buying in pounds: ";
	cin >> lbs;

	// process phase
	// calculating price per pound
		if (lbs > 100) 
		{
			prcperlbs = 0.10;
		}
		else if (lbs >= 50)
		{
			prcperlbs = 0.25;
		}
		else
		{
			prcperlbs = 0.50;
		}
	// calculating total price
		totprc = prcperlbs * lbs; 
	// output phase
		cout << setpricision(2) << fixed;
		cout << "The price per pound of the apples is: $" << prcperlbs << endl;
		cout << "The total price of all the apples you're buying is: $" << totprc << endl;
		
		return 0;




}

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	// define variables
	int qwidget;
	double prc, totprc, extprc, taxamnt;
	char cstatus;
	// Input phase
	cout << "Enter the quantity of widgets: ";
	cin >> qwidget;
	cout << "Enter the customer status (A, B, C, D): ";
	cin >> cstatus;
	// process phase
	switch (cstatus)
	{
	case 'A': 
		if (qwidget > 10000) prc = 10;
		else prc = 30;
		break;
	case 'B': 
		if (qwidget > 10000) prc = 12;
		else prc = 30;
		break;
	case 'C':
		if (qwidget > 5000 && qwidget <= 10000) prc = 20;
		else prc = 30;
	case 'D': 
		if (qwidget >= 5000 && qwidget <= 10000) prc = 22;
		else prc = 30;
		break;
	default: 
		prc = 30;
	}
	extprc = qwidget * prc;
	taxamnt = extprc * 0.07;
	totprc = extprc + taxamnt;
	// output phase
	cout << setprecision(2) << fixed;
	cout << "The extended price is: $" << extprc << endl;
	cout << "The tax amount is: $" << taxamnt << endl;
	cout << "The total price (including tax) is: $" << endl;
	
	return 0;
}

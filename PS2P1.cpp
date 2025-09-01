#include<iostream>
using namespace std;
int main()
{

	// define variable
	float qty, unitprice;
	string extprice;
	float extprice;
	
	// input phase
	cout << "Enter quantity";
	cin >> qty;
	cout << "Enter price per item";
	cin >> unitprice;

	// process phase
	extprice = qty * unitprice;
	cout << "The extended price is: $" << extprice << endl;

	return 0;

} // End of main
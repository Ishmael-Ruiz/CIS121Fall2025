#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
double compute_extprice(float item, int quantity, double costperitem) // fuunction to compute Extennded Price
{
	double extprice;
	extprice = quantity * costperitem;
	return extprice;

}
int main()
{
	// input phase
	float item;
	int quantity;
	double extprice, costperitem, totalextprice = 0.0;
	double tax, totalreciept;
	ifstream infile;
	
	// process phase
	infile.open("Grocery.txt");

	while (!infile.eof())
	{
		infile >> item >> quantity >> costperitem;
		extprice = compute_extprice(item, quantity, costperitem);
		totalextprice += extprice;

		// output within loop

		cout << setpricision(2) << fixed;
		cout << "Item: " << item << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Cost per Item: $" << costperitem << endl;
		cout << "Extended Price: $" << extprice << endl;

	} // end of loop
	tax = totalextprice * 0.07;
	totalreciept = totalextprice + tax;
	
	//output after loop

	cout << "Sum of Extended Price for all items: $" << totalextprice << endl;
	cout << "Salse Tax: $" << tax << endl;
	cout << "Total Reciept: $" << totalreciept << endl;

	system("pause");

	return 0;
}

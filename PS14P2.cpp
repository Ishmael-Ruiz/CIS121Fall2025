#include<iostream>
#include<string>
#include<iomanip>
#include"Computer.h"
using namespace std;
int main()
{
	// define variables
	string cmake, cmodel, cCPU, cRAM, chard_drive, ctype;
	double ccost;

	Computer comp1; // instansiates the oject

	// Get computer information from user (input phase)

	cout << "Enter computer make (Lenovo, HP, Apple): ";
	cin >> cmake;
	comp1.computer_make_set(cmake);
	cout << "Enter computer model: ";
	cin >> cmodel;
	comp1.computer_model_set(cmodel);
	cout << "Enter computer CPU (Intel, AMD): ";
	cin >> cCPU;
	comp1.computer_CPU_set(cCPU);
	cout << "Enter computer RAM (8GB, 16GB, 32GB): ";
	cin >> cRAM;
	comp1.computer_RAM_set(cRAM);
	cout << "Enter computer hard drive (HD, SSD): ";
	cin >> chard_drive;
	comp1.computer_hard_drive_set(chard_drive);
	cout << "Enter computer type (Laptop, Notebook, Desktop, Tablet): ";
	cin >> ctype;
	comp1.computer_type_set(ctype);

	// calulate computer cost (prcessing phase)

	ccost = comp1.computer_cost_get();

	// Display the computer information (output phase)
	cout << fixed << setprecision(2);
	cout << "Computer make: " << comp1.computer_make_get() << endl;
	cout << "Computer model: " << comp1.computer_model_get() << endl;
	cout << "Computer CPU: " << comp1.computer_CPU_get() << endl;
	cout << "Computer RAM: " << comp1.computer_RAM_get() << endl;
	cout << "Computer hard drive: " << comp1.computer_hard_drive_get() << endl;
	cout << "Computer type: " << ctype << endl;
	cout << "Computer cost: $" << ccost << endl;

	system("pause");
	return 0;
}
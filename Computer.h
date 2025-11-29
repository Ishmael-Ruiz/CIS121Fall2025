#include<string>
using namespace std;
class Computer
{
private:
	string computer_make;
	string computer_model;
	string computer_CPU;
	string computer_RAM;
	string computer_hard_drive;
	string computer_type;
	double computer_cost;
public:
	Computer() // default constructor
	{
		computer_make = "Lenovo";
		computer_model = "LE100A";
		computer_CPU = "Intel";
		computer_RAM = "32GB";
		computer_hard_drive = "HD";
		computer_type = "Laptop";
		computer_cost = 2200.00; // default cost condidering default make, CPU, RAM, type
	}
	void Computer::computer_make_set(string cmake)
	{
		computer_make = cmake;
	}
	string Computer::computer_make_get()
	{
		return computer_make;
	}
	void Computer::computer_model_set(string cmodel)
	{
		computer_model = cmodel;
	}
	string Computer::computer_model_get()
	{
		return computer_model;
	}
	void Computer::computer_CPU_set(string cCPU)
	{
		computer_CPU = cCPU;
	}
	string Computer::computer_CPU_get()
	{
		return computer_CPU;
	}
	void Computer::computer_RAM_set(string cRAM)
	{
		computer_RAM = cRAM;
	}
	string Computer::computer_RAM_get()
	{
		return computer_RAM;
	}
	void Computer::computer_hard_drive_set(string chard_drive)
	{
		computer_hard_drive = chard_drive;
	}
	string Computer::computer_hard_drive_get()
	{
		return computer_hard_drive;
	}
	void Computer::computer_type_set(string ctype)
	{
		computer_type = ctype;
	}
	string Computer::computer_type_get()
	{
		return computer_type;
	}
	void Computer::computer_cost_set(double ccost)
	{
		computer_cost = ccost;
	}
	double Computer::computer_cost_get()
	{
		//Calculate computer cost based off make
		if (computer_make == "Lenovo")
			computer_cost += 1200.00;
		else if (computer_make == "HP")
			computer_cost += 1000.00;
		else if (computer_make == "Apple")
			computer_cost += 2000.00;
		// Adjust cost based off CPU
		if (computer_CPU == "Intel")
			computer_cost += 200.00;
		// Adjust cost based off RAM
		if (computer_RAM == "16GB")
			computer_cost += 300.00;
		else if (computer_RAM == "32GB")
			computer_cost += 500.00;
		// Adjust cost based off hard drive
		if (computer_hard_drive == "SSD")
			computer_cost += 500.00;
		// Adjust cost based off type
		if (computer_type == "Laptop")
			computer_cost += 300.00;
		else if (computer_type == "Tablet")
			computer_cost -= 200.00; // subtract cost for tablet
		return computer_cost;
	}
};
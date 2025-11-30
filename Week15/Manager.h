#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;

class Manager : public Employee
{
public:
	Manager();
	float long_term_bonus();
	float bonus() override; // Override base class bonus method
	~Manager();
};
Manager::Manager() : Employee()
{
}
float Manager::long_term_bonus() // Method to compute long term bonus (50% of salary)
{
	return m_salary * 0.50;
}
float Manager::bonus() // overide bonus to compute 50% of salary
{
	return m_salary * 0.50;
}

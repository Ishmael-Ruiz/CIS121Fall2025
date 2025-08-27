#include<iostream>
using namespace std;
int main()
{
	// define variable
	float number1, number2;
	string sum, product, difference;
	float sum, product, difference;

	// input phase
	cout << "Enter first number";
	cin >> number1;
	cout << "Enter second number";
	cin >> number2;

		// process phase
		sum = number1 + number2;
		product = number1 * number2;
		difference = number1 - number2;
		cout << "sum of the numbers: " << sum << endl;
		cout << "product of the numbers: " << product << endl;
		cout << "difference of the numbers: " << difference << endl;
		
		return 0;

} // end of main
#include<iostream>
using namespace std;
int main()
{
	// define variable
	float n1, n2, n3;
	string result;
	float result;

	// input phase
	cout << "Enter first integer";
	cin >> n1;
	cout << "Enter the second integer";
	cin >> n2;
	cout << "Enter the third integer";
	cin >> n3;

	// process phase
	result = (n1 + n2) * n3;
	
	cout << "result of the integers: " << result << endl;

	return 0;

} // end of main

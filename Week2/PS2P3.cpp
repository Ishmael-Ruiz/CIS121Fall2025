#include<iostream>
using namespace std;
int main()
{
	// define variable
	float len, wid;
	string area, circ;
	float area, circ;

	// input phase
	cout << "Enter length of a rectangle";
	cin >> len;
	cout << "Enter the width of a rectangle";
	cin << wid;
	
	// process phase
	area = len * wid;
	circ = 2 * len + 2 * wid;
	cout << "Area of the rectangle: " << area << endl;
	cout << "Circuference of the rectangle: " << circ << endl;

	return 0;

} // end of main

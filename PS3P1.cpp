#include<iostream>
using namespace std;
int main()
{

	// define variable
	
	double exam1, exam2, totalscore;
	
	// input phase
	cout << "Enter first exam score";
	cin >> exam1;
	cout << "Enter second exam score";
	cin >> exam2;

	//process phase
	totalscore = (exam1 * 0.60) + (exam2 * 0.40);
	cout << "The total score of the two exams is: " << totalscore << endl;
	
	return 0;

}
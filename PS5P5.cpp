#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	// define variable
	double weight, rtperlbs, tot;
	// input phase
	cout << "Enter the weight of the metal you brought in: ";
	cin >> weight;
	// process phase
	if (weight > 100)
	{
		rtperlbs = 0.50;
	}
	else if (weight >= 30)
	{
		rtperlbs = 0.25;
	}
	else if (weight >= 20)
	{
		rtperlbs = 0.20;
	}
	else
	{
		rtperlbs = 0.10;
	}
	tot = weight * rtperlbs;
	// output phase
	cout << setpricison(2) << fixed;
	cout << "Weight of the metal brought in: " << weight << " pounds" << endl;
	cout << "Rate per pound: $" << rtperlbs << endl;
	cout << "Total payment based off weight and rate per pound: $" << tot << endl;

	return 0;

}
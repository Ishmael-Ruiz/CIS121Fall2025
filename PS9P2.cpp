#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
// function to batting average
double computebattingaverage(int hitnumber, int atbatnumber) {
	return static_cast<double>(hitnumber) / atbatnumber;
}
int main()
{
	// define variable
	string lname;
	int hitnumber, atbatnumber;
	double battingaverage;
	int playercount = 0;
	// input phase
	cout << "Enter player's last name, number of hits, and number of at bats (Ctril+Z to stop)";
	cin >> lname, hitnumber >> atbatnumber;
	// process phase
	while (!cin.eof()) {
		battingaverage = computebattingaverage(hitnumber, atbatnumber);
		// output within loop
		cout << fixed << setpricision(2); 
		cout << "Player last name: " << lname << endl;
		cout << "Batting average: " << battingaverage << endl;

		playercount++;
	}
	// output after loop
	cout << "Total number of players entered: " << playercount << endl;
	return 0;

}
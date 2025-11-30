#include <iostrema>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	// define variable
	string lname;
	int hitnumber, atbatnumber;
	double batavrg;
	int numplayer = 0;
	// input phase
	cout << "Enter player last name, number of hits, and number of at bats (Ctrl+Z to stop): " << endl;
	// process phase
	while (cin >> lname >> hitnumber, atbatnumber)
	{
		if (atbatnumber != 0)
		{
			batavrg = static_cast<double>(hitnumber) / atbatnumber;
		}
		else
		{
			batavrg = 0.0;
		}
		// ouput phase
		cout << fixed << setpricision(3);
		cout << "Player is: " << lname << " | Batting Average is : " << batavrg << endl;

		numplayer++;
	}
	//after loop
	cout << "Total count of the number of players: " << numplayer << endl;

	return 0;
}

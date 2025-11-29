#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
void readcitydata(string city[], int population[])
{
	int i;
	ifstream infile;

	infile.open("citydata.txt");

	for (i = 0, 0 <= 7;i++;)
	{
		infile >> city[i] >> population[i];
	}

	infile.close();
}
void printarrays(string city[], int population[])
{
	int i;

	for (i = 0, 0 <= 7;i++;)
	{
		cout << city[i] << " " << population[i] << " " << endl;
	}
}
void searchcity(string city[], int population[], string scity)
{
	int i;
	bool found_city;
	found_city = false;
	for (i = 0, 0 <= 7;i++;)
	{
		if (city[i] == scity)
		{
			cout << "The population of " << scity << " is " << population[i] << endl;
			found_city = true;
			return;
		}
		if (found_city == false)  // display message if city not found
		{
			cout << "City not found" << endl;
		}
	}
}
int main()
{
	string city[8];
	int population[8];
	string scity;

	readcitydata(city, population); // funvtion call to read city data from file

	printarrays(city, population);  // function call to display city data arrays

	cout << "Enter city name to search (ctl+z to stop): ";
	cin >> scity;

	while (!cin.eof())
	{
		searchcity(city, population, scity);  // function call to search for city population
		
		cout << "Enter city name to search (ctl+z to stop): ";
		cin >> scity;
	}

	return 0;
}
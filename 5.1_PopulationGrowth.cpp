//This program calculates the growth of a population over a period of time dependent of user inputs.

#include <iostream>
using namespace std;

int main() 
{
	//Declaring input variables.
	double increaseI;
	int dayCount, organismStart;

	//Declaring calculation variables.
	double newPopulation, increaseP, dayIncrement;
	newPopulation = 0;

	//Prompts + increase percent calculation.
	cout << "What's the starting population? Enter as an integer greater than or equal to two." << endl;
	cin >> organismStart;
	cout << endl;

	cout << "How much is it increasing daily? Enter as a real number greater then zero." << endl;
	cin >> increaseI;
	increaseP = increaseI / 100;
	cout << endl << "Percentage: " << increaseP << endl;

	cout << "How many days will you track this increase? Enter as an integer greater than or equal to one." << endl;
	cin >> dayCount;
	cout << endl;

	//Calculating the new population and locking it behind the parameters.
	if (organismStart >= 2 && increaseI > 0 && dayCount >= 1)
	{
		for (int count = 1; count <= dayCount; count++)
		{
			dayIncrement = organismStart * increaseP;
			newPopulation += dayIncrement + organismStart;
			cout << "Population after day " << count << ": " << newPopulation << endl;
			cout << endl;
		}
	}
	else if (organismStart < 2)
	{
		cout << "ERROR: The starting population must be greater than or equal to two." << endl;
	}
	else if(increaseI <= 0)
	{ 
		cout << "ERROR: The daily increae must be greater than zero." << endl;
	}
	else
	{
		cout << "ERROR: The number of days tracked must be greater than or equal to one." << endl;
	}

	return 0;
}
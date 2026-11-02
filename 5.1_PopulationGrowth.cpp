//This program calculates the growth of a population over a period of time dependent of user inputs.

#include <iostream>
using namespace std;

int main() 
{
	//Declaring input variables.
	double increaseI;
	int dayCount, organismStart;

	//Calculation variables.
	double newPopulation, increaseP, dayIncrement;

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

	return 0;
}
#include <iostream>
#define LITER 0.264179
using namespace std;
int main( ) 
{
	int litersUsed, milesDriven;
	float gallonsUsed;
	char quitChoice = 'y';
	while (quitChoice == 'Y' || quitChoice == 'y')
	{
		cout << "Enter the number of liters used: ";
		cin >> litersUsed;
		cout << "Enter the number of miles driven: ";
		cin >> milesDriven;
		gallonsUsed = litersUsed * LITER;
		cout << "Your vehicle gave you " <<  milesDriven / gallonsUsed << " miles per gallon"<<endl;
		cout << "Enter Y/y to do another calculation, anything else quits: ";
		cin >> quitChoice;
	}
	return 0;
}
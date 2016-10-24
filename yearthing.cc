#include <iostream>
using namespace std;
int getCenturyValue(int year);
int getMonthValue(int month, int year);
int getDayValue(int day);
bool isLeapYear(int year);
int getYearValue(int year);

int main() 
{
	int monthIn, dayIn, yearIn;
	cout << "Enter month (1-12): ";
	cin >> monthIn;
	cout << "Enter day (1-31): ";
	cin >> dayIn;
	cout << "Enter year (0000-9999): ";
	cin >> yearIn;
	int myCentury = getCenturyValue(yearIn);
	int myMonth = getMonthValue(monthIn, yearIn);
	int myYear = getYearValue(yearIn);
	int combined = dayIn + myMonth + myYear + myCentury;
	int final = combined % 7;
	
	switch (final)
	{
		case 1:
		if (final == 1){
			cout << "Monday" << endl;
		}
		case 2:
		if (final == 2){
			cout << "Tuesday" << endl;
		}
		case 3:
		if (final == 3){
			cout << "Wednesday" << endl;
		}
		case 4:
		if (final == 4){
			cout << "Thursday" << endl;
		}
		case 5:
		if (final == 5){
			cout << "Friday" << endl;
		}
		case 6:
		if (final == 6){
			cout << "Saturday" << endl;
		}
		case 7:
		if (final == 7){
			cout << "Sunday" << endl;
		}
	}
	
	return 0;
}

int getCenturyValue(int year)
{
	int remain = year / 100;
	remain = remain % 4;
	remain = 3 - remain;
	return (remain * 2);
}

int getMonthValue(int month, int year)
{
	bool isLeap = isLeapYear(year);
    switch (month)
	{
    	case 1 :
		if (isLeap) {
			return 6;
		}
		return 0;
		
		case 2 :
		if (isLeap) {
			return 2;
		}
		return 3;
		
		case 3 :
		return 3;

		case 4 :
		return 6;
		
		case 5 :
		return 1;
		
		case 6 :
		return 4;
		
		case 7 :
		return 6;
		
		case 8 :
		return 2;
		
		case 9 :
		return 5;

		case 10 :
		return 0;
		
		case 11 :
		return 3;
		
		case 12 :
		return 5;
	}
	return -1;
}

bool isLeapYear(int year)
{
	bool bLeapYear = false;
	if ((year % 4) == 0)  {
	     if ((year % 100) == 0) {
	          bLeapYear = ((year % 400) == 0);
	     } else {
	          bLeapYear = true;
	     }
	     return bLeapYear;
	}
	return bLeapYear;
}

int getYearValue(int year)
{
	int myYear = year % 100;
	return myYear+(myYear/4);
}
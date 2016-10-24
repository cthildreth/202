#include <iostream>
#include <string>
using namespace std;

int main() {
	char nameIn[100];
	int yearIn, age;
	float hoursWeeklyIn, hourlyPayRateIn;
	
	cout << "Name? ";
	cin.getline(nameIn, 100);
	cout << "Year of birth? ";
	cin >> yearIn;
	cout << "Hours worked weekly? ";
	cin >> hoursWeeklyIn;
	cout << "Hourly pay rate? ";
	cin >> hourlyPayRateIn;
	
	cout << "Hello, " << nameIn << ".\n";
	cout << "You are " << 2016 - yearIn << " years old.\n";
	cout << "You earned $" << hoursWeeklyIn * hourlyPayRateIn << " last month.\n";

	return 0;
}
   
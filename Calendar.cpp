//============================================================================
// Name        : Calendar.cpp
// Author      : Chekad
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Calendar{

private:
	int year, month, day;
public:
	int getDay() const;
	void setDay(int day);
	int getMonth() const;
	void setMonth(int month);
	int getYear() const;
	void setYear(int year);

	void output();

};
int main() {
	Calendar c;
	c.setYear(2016);
	c.setMonth(10);
	c.setDay(5);
	c.output();
	return 0;
}

int Calendar::getDay() const {
	return day;
}

void Calendar::setDay(int day) {
	this->day = day;
}

int Calendar::getMonth() const {
	return month;
}

void Calendar::setMonth(int month) {
	this->month = month;
}

int Calendar::getYear() const {
	return year;
}

void Calendar::setYear(int year) {
	this->year = year;
}

void Calendar::output() { cout<< month << "/"<<day << "/"<<year%2000<<endl;}

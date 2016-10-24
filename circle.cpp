#include <iostream>
#include <cassert>
#define PI 3.1415926
using namespace std;

class Point
{
	private:
		int x, y;
    public:
		Point(int x0, int y0);
		Point();
		void set(int x, int y);
		void output();	

};

class Circle
{
	private:
		int h, k, r;
    public:
		Circle(int h, int k, int r);
		Circle();
		void set(int h, int k, int r);
		void output();	
		void calculateArea();

};

int main()
{
	Point myPoint;
	myPoint.set(2,3);
	myPoint.output();
	Circle myCircle;
	myCircle.set(1,2,3);
	myCircle.calculateArea();
	
	return 0;
}

Point::Point(): x(0), y(0)
	{ /* body intentionally empty */ }
	
Circle::Circle(): h(0), k(0), r(0)
	{ /* body intentionally empty */ }
	

void Point::set(int x_in, int y_in)
{
	x = x_in;
	y = y_in;
}
	
void Point::output()
{
	cout << x << endl;
}

void Circle::set(int h_in, int k_in, int r_in)
{
	h = h_in;
	k = k_in;
	r = r_in;
}
	
void Circle::calculateArea()
{
	cout << PI * (r * r) << endl;
}
	
#include<iostream>
using namespace std;

class Fraction{
    public:
        int num, den;
        Fraction add(Fraction other);
        Fraction simplify();
        //Fraction fastIncrement(Fraction f);
        void output();
};
int gcd(int x, int y);

int main()
{
   cout<<gcd(10,-5);
   Fraction f1, f2, f3;//f4;
   f1.num = 4; f1.den=5;
   f2.num =2; f2.den = 3;
   f3 =f1.add(f2);
   f3.output();
   //f3 = f1.add(f2).simplify();
   //f4 = f1.simplify().add(f2.simplify());

   return 0;
}

Fraction Fraction::add(Fraction other){
	Fraction result;
	result.num = num*other.den + other.num *den;
	result.den = den*other.den;
    return result;

}

Fraction Fraction::simplify(){
	Fraction f1;
	f1.num = 4; f1.den=5;
    return f1;

}

int gcd(int x, int y){
	if( y<0)
		y =-y;

    if(x % y == 0)
        return y;
    else
        return gcd(y, x%y);
}

void Fraction::output(){
	cout<< num << "/"<< den;

}


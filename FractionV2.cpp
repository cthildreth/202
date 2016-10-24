#include<iostream>
using namespace std;

class Fraction{
	private:
		int num, den;
    public:
		void set(int n, int d);
		void setNum(int newNum);
		void setDen(int newDen);
        Fraction add(Fraction other);
        Fraction simplify();
        //Fraction fastIncrement(Fraction f);
        void output();
        int gcd();
        Fraction reduce();


};
int gcd(int x, int y);
Fraction reduce(Fraction f);
void reduce(Fraction& f);
int main()
{
   cout<<gcd(10,-5)<<endl;
   Fraction f1, f2, f3;//f4;
   f1.set(4,5);
   cout<<f1.gcd()<<endl;

   f2.setNum(2);
   f2.setDen(3);

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

int Fraction::gcd(){
	Fraction temp;
	if( den<0)
			den =-den;

	    if(num % den == 0)
	        return den;
	    else{
	    	temp.num =den;
	    	temp.den= num%den;
	        return temp.gcd();
	    }
}

void Fraction::set(int n, int d){
	num = n;
	den = d;

}

void Fraction::setNum(int newNum){
	num = newNum;
}
void Fraction::setDen(int newDen){
	den = newDen;
}
Fraction Fraction::reduce(){
	Fraction temp;
	temp.set(num,den);
	int m = temp.gcd();
	num /= m;
	den /= m;
}
Fraction reduce(Fraction f){
	int m = f.gcd();



}
void reduce(Fraction& f){

}

void Fraction::output(){
	cout<< num << "/"<< den;

}


#include<iostream>
#include<cassert>
using namespace std;

class Fraction{
	private:
		int num, den;
    public:
		void set(int n, int d);
		void setNum(int newNum);
		void setDen(int newDen);
		int getNum();
		int getDen();

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
   //cout<<gcd(10,-5)<<endl;
   Fraction f1, f2, f3,f4;
   f1.set(11,-7);
   f1.output();

   f2.setNum(2);
   f2.setDen(3);

   f3 =f1.add(f2);
   f3.output();
   cout<< "I am just before setting denominator equal to 0";
   f4.set(12,2);
   //cout<<f1.den;
   cout<< f1.getNum()<<endl;
   cout<< f2.getDen()<<endl;
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
	assert(d != 0);
	num = n;
	den = d;

}

void Fraction::setNum(int newNum){
	num = newNum;
}
void Fraction::setDen(int newDen){
	den = newDen;
}

int Fraction::getNum() {
	return num;
}
int Fraction::getDen(){ return den;}

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
	if(den<0 ){
		den *=-1;
		num *=-1;
	}

	cout<< num << "/"<< den<<endl;

}


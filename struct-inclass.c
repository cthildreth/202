#include <iostream>
#include <string>
using namespace std;

struct Person{
    string first;
    string last;
    int age;
};

Person nameChange(Person p, string newFirst, string newLast);
void ageChange(Person &p, int newAge);
Person prettyPrint(Person p);
int main()
{

    Person me = {"Hildreth", "Charles", 34};
    cout << me.age << endl;
    Person you; you.first = "Al"; you.last="Baartman";you.age=72;
    ageChange(me, 35);
    prettyPrint(me);
    cout << "After one year: "<< me.age<<endl;
    Person newYou = nameChange(you, "Bob", "Jones");
    cout << "New person full name:" << newYou.first << " " << newYou.last<<endl;
    cout << "Your new age is "<<newYou.age;
    return 0;
}

Person nameChange(Person p, string newFirst, string newLast){
    p.first = newFirst;
    p.last = newLast;
    return p;
}
void ageChange(Person &p, int newAge){
    p.age = newAge;
}

Person prettyPrint(Person p){
    cout<< p.first << " " << p.last << "is " << p.age << "years old."<<endl;
}

#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        void prettyPrint();
        string first;
        string last;
        int age;
};

int main()
{

    Person me = {"Charles", "Hildreth", 34};
    me.prettyPrint();
    me.first = "CT";
    me.prettyPrint();
    return 0;
}


void Person::prettyPrint(){
    cout<< first << " " << last << " is " << age << " years old."<<endl;
}

#include <iostream>
using namespace std;
class Point {
    public:
        double x, y;
};
class Vector {
    public:
        Point start, end;
};

int main()
{
    Vector v1;
    v1.start.x = 3.0;
    v1.start.y = 4.0;
    v1.end.x = 5.0;
    v1.end.y = 6.0;
    Vector v2;
    v2.start = v1.start;
    v2.end.x = v1.end.x+1;
    v2.end.y = v1.end.y+1;
    return 0;
}

int Point whichQuadrant(){
    if(x>0 && y > 0){
        return 1;
    }
    else if(x>0 && y > 0){
        return 2;
    }
    else if(x<0 && y <  0){
        return 3;
    }
}

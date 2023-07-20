#include<iostream>
using namespace std;

class Shape
{
    public:

    virtual void Area()=0;                                          //pure virtual function



};

 class circle : public Shape{


 };

int main()
{
    Shape *s1 = ;
    // circle *s2=&s1;
    *s2->Area();
    return 0;
}




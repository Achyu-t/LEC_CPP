#include<iostream>
using namespace std;

class Base
{
protected:

int x, y;

public:

void getdata()
{
    cout<<"Enter any two numbers: "<<endl;
    cin>>x>>y;

}
void showdata()
{
    cout<<"The sum is: "<<(x+y);
}

};


class Child : public Base
{

};

int main()
{
    Base obj1;
    Child obj2;
    obj2.getdata(); 
    obj2.showdata();
return 0;
}
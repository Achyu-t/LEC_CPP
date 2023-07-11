#include<iostream>
using namespace std;

class Parent 
{
    public:

    Parent()
    {
        cout<<"This is parent class constructor."<<endl;
    }
    
    ~Parent()
    {
        cout<<"This is parent class destructor."<<endl;
    }


};

class Child : public Parent
{
    public:
    Child()
    {
        cout<<"This is child class constructor."<<endl;
    }
    
    ~Child()
    {
        cout<<"This is child class destructor."<<endl;
    }
};



int main()
{
    Parent obj1;
    Child obj2;
    return 0;
}
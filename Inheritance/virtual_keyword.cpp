#include<iostream>
using namespace std;

class Parent
{
    public:
    
    void showAdd()
    {
      cout<<"This is base class:";
    }


};
class Child : public Parent
{
    public:
    void showAdd()
    {
      cout<<"This is child class:";
    }
};

int main()
{
    Parent *bptr;
    Child c1;
    bptr=&c1;
    bptr->showAdd();
    return 0;
}
#include<iostream>
using namespace std;

class Parent
{
    protected:
    int id_protected;
};

class Child : public Parent{
    public:
    void setId(int id)
    {
        id_protected = id;
    }

    void showdata()
    {
        cout<<id_protected;
    }
};
int main()
{
    Parent p1;
    Child c1;
    c1.setId(2);
    c1.showdata();
    p1.id=5;
    return 0;
}
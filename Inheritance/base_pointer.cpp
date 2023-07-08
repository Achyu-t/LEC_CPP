#include<iostream>
using namespace std;

class base
{
protected:
int *p;

public:

void showAdd()
{
    cout<<"Assigning address to pointer";<<endl;
    //p= this->d1;
    cout<<this->p
}


};
class derive : public base
{
};

int main()
{
    base d1;
    derive d2;
    d2.showAdd();
return 0;
}
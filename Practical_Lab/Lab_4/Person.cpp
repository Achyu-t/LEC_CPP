
#include"Person.h"
#include<iostream>
using namespace std;
void person::getdata()
{
    cout<<"Enter name: "<<endl;cin>>name;
    cout<<"Enter age: "<<endl;cin>>age;
    cout<<endl;
}

void person::showdata()
{
    cout<<"Name is: "<<name;
    cout<<endl<<"Age is: "<<age;
    cout<<endl;
}
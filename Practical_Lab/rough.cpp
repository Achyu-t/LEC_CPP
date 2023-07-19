#include<iostream>
using namespace std;

class student
{
public:
int a=60;

void clac()
{
if(a>40)
{   
    cout<<"pass"<<endl;
}

else{
    cout<<"fail"};


}
};

int main()
{
    student obj1;
    obj1.clac();
return 0;
}
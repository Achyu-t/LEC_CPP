#include<iostream>
using namespace std;

class addition{
   public:
    int c=15,d=10;
    float num_1,num_2,num_3;

 
    addition(int a , int b)
    {
        a=c;
        b=d;
        cout<<"The sum from parameterized constructor is: "<<(a+b)<<endl;
    }
    addition()
    {
        cout<<"Enter any number of choice: "<<endl;cin>>num_1;
        cout<<"Enter any second number of choice: "<<endl;cin>>num_2;
    }
    void calcdata(float sum)
    {
        sum= showdata();
        cout<<"The sum is : "<<sum;
    }
    float showdata()
    {
        num_3 = num_1 + num_2;
        
        return num_3;
    }

};

void nonmem_fun()
{
    cout<<endl<<"This is a non member function."<<endl;
}


int main()
{
    addition s1,s2(2,3);
    s1.showdata();
    s1.calcdata(1);
    nonmem_fun();
    return 0;
    
}
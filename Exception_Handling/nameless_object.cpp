#include<iostream>
#include<cmath>
using namespace std;

class Number
{
    private:
    int num;

    public:
    class NEG{};

    void readnum()
    {
        cout<<"Enter number: "<<endl;
        cin>>num;
    }
    double sqroot()
    {
        if(num<0)
            throw NEG();
        else 
            return (sqrt(num));
    }
};


int main()
{
    Number n1;
    double res;
    n1.readnum();
    try
    {
        cout<<"\n Trying to find square root...";
        res=n1.sqroot();
        cout<<"\nSquare root is: "<<res<<endl;
        cout<<"Success... Exception is not raised"<<endl;
    }
    catch(Number::NEG)
    {
       cout<<"\nSquare root of negative number is not possible. ";
    }
    return 0;
}
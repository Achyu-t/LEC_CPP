#include<iostream>
using namespace std;

class complex{
    private:
    int a,b;

    public:

    friend complex calcdata(complex c1, complex c2);

    void getdata(int x, int y)
    {
        a=x;
        b=y;
    }

    void displaydata()
    {
        cout<<"The given compex number is "<<a<<" + "<<b<<"i"<<endl;

    }
};

complex calcdata(complex c1, complex c2)
{
    complex obj3;

    obj3.a=c1.a+c2.a;
    obj3.b=c1.b+c2.b;
    return obj3;
};

int main()
{
    complex o1,o2;
    o1.getdata(1,7);
    o2.getdata(3,2);
    o1.displaydata();
    o2.displaydata();

    complex sum = calcdata(o1,o2);

    sum.displaydata();
    return 0;
}
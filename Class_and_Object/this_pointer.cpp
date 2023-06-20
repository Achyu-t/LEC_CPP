#include<iostream>
using namespace std;

class A{
    int x;
    public:
    void getnum(int x)
    {   

        
      this -> x=x; 

    //   cin>>x;

    }

    void shownum()
    {
        cout<<x;

    }
};

int main()
{
    A obj;
    obj.getnum(4);
    obj.shownum();
    return 0;
}
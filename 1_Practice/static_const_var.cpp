#include<iostream>
using namespace std;

class Natural
{
private:
    static int count;
    const int id = 7;

public:
    void increase()
    {
        ++count;
    }
    void show()
    {
        cout<<count<<endl;
        cout<<id<<endl;
    }
};
int Natural :: count = 0;

int main()
{
    //ccreating 1st object
    Natural obj1;
    //incrementing value of count 2 times 
    obj1.increase();
    obj1.increase();
    cout<<"value in 1st obj : "<<endl;
    obj1.show();

    //creating 2nd object
    Natural obj2;
    cout<<"value in 2nd object : "<<endl;
    obj2.show();
return 0;
}
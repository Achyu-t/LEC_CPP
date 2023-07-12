#include<iostream>
using namespace std;

class Natural
{
private:
    static int count = 0;

public:
    void increase()
    {
        ++count;
    }
};

int main()
{
    //ccreating 1st object
    Natural obj1;
    //incrementing value of count 2 times 
    obj1.increase();
    obj1.increase();
    cout<<"value in 1st obj : "<<obj1.count<<endl;

    //creating 2nd object
    Natural obj2;
    cout<<"value in 2nd object : "<<endl;
return 0;
}
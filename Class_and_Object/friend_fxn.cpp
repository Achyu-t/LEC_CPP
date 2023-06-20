#include<iostream>
using namespace std;

class sample{
    friend float mean(sample obj1);
    
    private:
    float num1,num2;
    
    public:
    void getdata()
    {
        float a,b;
        cout<<"Input Data: "<<endl;
        cin>>a>>b;
        num1=a;
        num2=b;
    }
};

float mean(sample obj1)
{
    float m;
    m = (obj1.num1 + obj1.num2)/2;
    return m;

}

int main()
{
    sample obj1;
    obj1.getdata();
    cout<<"The mean is: "<<mean(obj1);
    return 0;
}
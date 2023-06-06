#include<iostream>
using namespace std;

class student{
    public:
    double marks,avg;
    void getdata()
    {
        cout<<"Enter your marks: "<<endl;cin>>marks;
    }

    void calc_avg(student s1, student s2)
    {
        avg=(s1.marks+s2.marks)/2;
    }

    void showdata()
    {
        cout<<"The average is "<<avg;
    }
};    

int main()
{
    student s1,s2,s3;
    s1.getdata();
    s2.getdata();
    s3.calc_avg(s1,s2);
    s3.showdata();
    return 0;
}

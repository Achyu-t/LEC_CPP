#include<iostream>
using namespace std;

class BCT{
    
    protected:
    int roll;

    private:
    int n;

    void get_num()
    {
        cout<<"Enter number of students: "<<endl;
        cin>>n;
        

    }

    
};

class student : public BCT{

    private:
    char name[20];

    void getdata()
    {
        int roll;
        cout<<"Enter name and roll no of student: "<<endl;
        cin>>name[20];
        cout<<endl;
        cin>>roll;

    }
    
};
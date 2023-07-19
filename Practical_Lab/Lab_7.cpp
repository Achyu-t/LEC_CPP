#include<iostream>
using namespace std;

class Student
{
protected:
char name[20];
int a;

public:
void getData()
{
    cout<<"Enter name of the student: "<<endl;
    cin>>name[20];

    cout<<"Enter roll number of student: "<<endl;
    cin>>a;
}

};


class Test : public Student
{
protected:
    int i;
    

    int marks[5];
public:
    void getData()
    {
        student::getdata();
        for(i=1;i<5;i++)
            {
                cout<<"Enter marks in subject no "<<i<<":"<<endl;
                cin>>marks[i];
            }
    }
    
};



class Result : public Test
{
public:
int j;
int total=0;

void calcData()
{
    for(j=0;j<5;j++)
    {
        total = total + marks[j] ;
    }
}

void displaydata()
{
    cout<<"Name of student is: "<<name[20]<<endl;
    cout<<"The total marks is: "<<total;
    
}

};

int main()
{   
    
    Result obj1;
    obj1.getData();
    
    obj1.calcData();
    obj1.displaydata();


return 0;
}
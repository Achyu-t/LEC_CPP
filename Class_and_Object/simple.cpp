#include<iostream>
using namespace std;

class friendss{

    public:
    char name[20];
    char phone[20];
    char address[20];

    void display_data();

    friendss()
    {
        cout<<"Enter your name :"<<endl;cin>>name;
        cout<<"Enter address :"<<endl;cin>>address;
        cout<<"Enter phone number:"<<endl;cin>>phone;
    }

    void title()
    {
        cout<<"The details of person is :"<<endl;
    }
    
    

};
 
int main()
{
  friendss f1,f2,f3;
  f1.title();
  f1.display_data();
   f2.title();
  f2.display_data();
   f3.title();
  f3.display_data();
  return 0;
}



 void friendss :: display_data()
    {
        
        cout<<"Name :"<<name<<endl;
        cout<<"Address :"<<address<<endl;
        cout<<"Phone :"<<phone<<endl;

    }
#include<iostream>
using namespace std;

class student{
    string name;
    public:
    void getname()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
    

    }

    void display()
    {
        
            cout<<"The name is: "<<name<<endl;

    }
    
    
};

int main(){
    int i;
    student a[5];
    for(i=0;i<5;i++){
        a[i].getname();
    }
    for(i=0;i<5;i++){
        a[i].display();
    }
    return 0;
}

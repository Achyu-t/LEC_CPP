#include<iostream>
using namespace std;

class Wall{
  public:
    float length,height;

    Wall()
    {
        cout<<"Rupesh is hancy"<<endl;
    }

    void getdata()
    {
        cout<<"Enter length and height: "<<endl;cin>>length;
        cin>>height;

    } 
    
    
    Wall(Wall &w1){
       length = w1.length;
       height = w1.height;

    }

    void showdata()
    {
      cout<<"The area is: "<<length*height; 
    }

};
int main()
{
    Wall w1;
    
    w1.getdata();
    Wall w2 = w1;
    w2.showdata();
}
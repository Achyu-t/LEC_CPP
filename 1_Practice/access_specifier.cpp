#include<iostream>
using namespace std;

class Vehicle{
    private:
    int plate_number;

    public:
    int getnumber(int a)
    {

       plate_number = a;
        return plate_number;

    }
};

int main(){
    int b= 343;

    Vehicle scooter;
    
    scooter.getnumber(b);
    cout<<"The number of plate is : "<<scooter.getnumber(b);
    return 0;

}
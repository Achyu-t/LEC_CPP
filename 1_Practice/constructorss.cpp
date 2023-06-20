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
    

    Vehicle scooter(1937);


}
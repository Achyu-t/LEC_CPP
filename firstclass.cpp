#include<iostream>
using namespace std;
class Room{
    public:
    int length;
    int breadth;
    int height;
    void calculateArea(int a, int b) {
        length= a;
        breadth= b;
      cout<<"The area is "<<length*breadth<<endl;
       
    }
    void calculateVolume(int a, int b,int c) {
        height= c ;
        cout<<"The volume is "<<length*breadth*height<<endl;
    }

};


int main() {
    Room obj401;
    obj401.calculateArea(10,20);
    obj401.calculateVolume(10,20,30);
    return 0;
}
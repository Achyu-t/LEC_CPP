#include<iostream>
using namespace std;
class Room{
    public:
    int length;
    int breadth;
    int height;
    void inputdata(){
        cout<<"Enter length, breadth, height:"<<endl;
        cin>>length;
        cin>>breadth;
        cin>>height;
    }
    double calculateArea() {
      return length*breadth; 
    }
    double calculateVolume() {

       return length*breadth*height;
      

    }

};


int main() {
    int area, volume;
    Room obj401;
    obj401.inputdata();
    obj401.calculateArea();
    obj401.calculateVolume();
    cout << "Area is : " << obj401.calculateArea() << endl;
    cout << "Volume is : " << obj401.calculateVolume();
    return 0;
}
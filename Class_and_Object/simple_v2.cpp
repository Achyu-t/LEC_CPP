#include<iostream>
using namespace std;

class sathiharu {
    public: 
        string name;
        string addresss;
        int age;
    
    public:

        sathiharu(string name,string addresss,int age){
            
         cout<<name<<endl<<addresss<<endl<<age;
        }
        
};


int main() {
    sathiharu firstfriend("Pikachu","Lalitpur",15);
    // firstfriend.name = "Krystal";
    // firstfriend.age = 22;
    // firstfriend.addresss = "Pilotbaba";
    // firstfriend.ghumeprogram();

    // secondfriend.name = "Pikachu";
    // secondfriend.age = 20;
    // secondfriend.addresss = "pilotbaba";
    // secondfriend.ghumeprogram();
    return 0;
}

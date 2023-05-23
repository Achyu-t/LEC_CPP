#include<iostream>
using namespace std;
int main()
{
    int number;
    float remainder,remainder2;
    cout << "Enter any number"<<endl;
    cin >> number;
     remainder = number%5;
    remainder2= number%7; 
    if (remainder==0) {

        if(remainder2 == 0){
            cout << "The number is divisible by both 5 and 7 "<<endl;
        }
        else{
        cout<<"The number is divisible by only 5"<<endl;
        }
        
    }
    else if(remainder2==0) {

        if(remainder != 0){
            cout << "The number is divisible by 7 only "<<endl;
        }
        
        
    }
    else {
        cout<<"The number is not divisible by either 5 or 7";
     }
     return 0;
}

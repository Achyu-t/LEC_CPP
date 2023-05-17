#include <iostream>
class student{
    int age;
    int roll;
    char name[15];
    void myclass(){
        cout<< "Enter your age ";
        cin>> age;

    }
}
int main{
    student hisobj;
    hisobj.myclass();
    cout<< hisobj.myclass.age;
    return 0;
}
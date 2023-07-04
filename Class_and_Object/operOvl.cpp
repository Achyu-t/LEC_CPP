#include<iostream>
using namespace std;

class over{
    public:
    int a,b,c;
   
  
    over(int x ,int y ,int z)
    {
        a=x;
        b=y;
        c=z;
    }

   void operator ++ () 
   {
    
    
        a = ++a;
        b = ++b;
        c = ++c;
    }

    void display()
    {
        cout<<"The values are: "<<a<<" "<<b<<" "<<c;
    }
    
    void show()
    {
        cout<<"The values before overloading are: " <<a<<" "<<b<<" "<<c<<endl;
    }

};

int main()
{
    over obj(9,126,19756);
    obj.show();
    ++obj;
    obj.display();
    return 0;
}





// a=5 b=10,   a-b=15
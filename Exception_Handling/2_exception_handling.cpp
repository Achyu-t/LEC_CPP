#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter value of a and b :";
    cin>>a>>b;
    int x = (a-b);
    try
    {
    if (x != 0)
        {
            cout<<"\n result"<<(a-b);
        }
     else
        {
        throw(x);
        }
    
    }

    catch(int x)
        {
             cout<<"\n Division by 0 is not allowed"<<endl;
        }
    cout<<"\n Next Statement"<<endl;
  return 0;
}
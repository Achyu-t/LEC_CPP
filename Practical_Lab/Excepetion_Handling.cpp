#include<iostream>
using namespace std;

int main()
{
    int x;
    float sq_root;
    cout<<"Enter any number to find sqaure root of : "<<endl;
    cin>>x;
    
    try
    {
        
        if(x<0)
        {
            throw x;
            
        }

        else 
        {
            int z=x;
            throw z;
        }
    }
        
    catch(int x)
        {
            cout<<"Negative input\n";
            int y= (-1)*x;
            sq_root = (y)^(1/2);
            cout<<"The square root is : "<<sq_root<<"i";
        }
    
    catch(int z)
        {
            
            
            sq_root = (z)^(1/2);
            cout<<"The square root is : "<<sq_root;
        }

    
        return 0;

}
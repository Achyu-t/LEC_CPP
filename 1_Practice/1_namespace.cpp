#include <iostream>


namespace n1 {
int x = 2;


void fun()
{
	std::cout << "This is fun() of n1";
    std:: <<endl;
		
}
}


namespace n2 {

int x = 5;

void fun()
{
	std::cout << "This is fun() of n2";
    std:: <<endl;
		
}
}


int main()
{
	
	cout << n1::x << endl;

	
	n1::fun();

	cout << n2::x << endl;

	n2::fun();

	return 0;
}


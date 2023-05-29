#include<stdio.h>
int main()
{
    int *pc , c;
    c=5;
    pc = &c;
    printf("the value of c is given by *pc i.e. %d\n",*pc);
    printf("the value of addreess of c is given by pointer variable %p",pc);
    return 0;
}

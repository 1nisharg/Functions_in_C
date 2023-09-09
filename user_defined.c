#include <stdio.h>

int sum(int a, int b) //int a, int b are Formal Parameter
{
    return a+b;
}

int main()
{
    int a=30,b=40;

    int res=sum(a,b); //Actual Parameter 
    printf("sum is: %d", res);
    return 0;
}
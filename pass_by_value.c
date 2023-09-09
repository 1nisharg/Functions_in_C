//Parameter passing in this method copies values from actual parameters into formal function parameters.

#include <stdio.h>

void swap(int a, int b)
{
    int temp=a;
    a = b;
    b = temp;
}

int main()
{
    int a=3 , b=2;
    printf("Before swap: %d, %d\n",a,b);
    swap(a,b);
    printf("After swap: %d, %d\n", b,a);
    return 0;
}

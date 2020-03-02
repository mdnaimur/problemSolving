#include<stdio.h>
#include<stdlib.h>
void func(int x,int*y);
void main()
{
    int a,b;
    a=10;
    b=20;
    printf("values before calling function:a=%d and b=%d\n",a,b);
    func(a,&b);
    printf("values after calling function :a=%d and b=%d\n",a,b);
}
void func(int x,int *y)
{
    x=x+20;
    *y=*y+20;
    printf("value in user defined funtion:a=%d and b=%d\n",x,*y);
}

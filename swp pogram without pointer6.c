#include<stdio.h>
#include<stdlib.h>
void swap(int x,int y);
void main()
{
int b,d;
b=10;
d=12;
printf("before swap:%d%d",b,d);
swap(b,d);

printf("\n after calling swap(b,d):%d%d\n",b,d);
}
void swap(int x, int y)
{
int temp = x;
x=y;
y=temp;
}

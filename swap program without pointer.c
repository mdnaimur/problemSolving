#include<stdio.h>
#include<stdlib.h>
void swap(int x,int y);
void main()
{
    int b=10,d=12,temp,x,y;
    printf("before swap:%d\t%d",b,d);
    swap(b,d);
    printf("\n After calling swap(b,d)%d\t%d\n",b,d);
}
void swap(int x,int y)
{
int    temp=x;
    x=y;
    y=temp;
}

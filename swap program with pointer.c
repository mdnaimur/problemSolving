#include<stdio.h>
#include<stdlib.h>
void swap (int *x,int*y);
void main()
{
    int b=10,d=20;
    printf("before swap :%d %d",b,d);
    swap (&b,&d);
    printf("\n after calling swap (b,d): %d %d",b,d);
}
void swap (int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

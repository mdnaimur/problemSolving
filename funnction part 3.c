#include<stdio.h>
int testf(int x)
{
    int y=x;
    x=2*y;
    return (x*y);
}
int main()
{
    int x=10,y=20,z=30;
    z=testf(x);
    printf("%d  %d  %d\n",x,y,z);
    return 0;
}

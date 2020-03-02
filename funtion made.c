#include<stdio.h>

int minimum(int a, int b)
{
    int temp;
    if(a<b)
    {
        temp=a;
    }
    else
   {
        temp=b;
    }
    return temp;
}
int main()
{
    int a,b;
    int sm=0;
    scanf("%d%d",&a,&b);
    sm=minimum(a,b);
    printf("the number small %d",sm);
    return 0;

}

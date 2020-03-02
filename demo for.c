#include<stdio.h>
int main()
{
    int n=20;
    int i=1;
    for(;n<=20;n++)
    {
        for(;i<=10;i++)
        {
            printf("%d*%d=%d\n",n,i,n*i);
        }
    }

    return 0;
}

#include<stdio.h>
int main()
{
    long long n,a=0;
    while(scanf("%lld",&n)==1&&n!=-1)
    {
        while (n!=0)
    {
       n=n/10;
       ++a;
    }
    printf("count of number %d\n",a);
    }
return 0;
}

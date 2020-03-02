#include<stdio.h>
void main()
{
    int k,base,i,a[5],sum;
    for(i=3;i>=0;i--)
    {
        scanf("%x",&a[i]);
    }
    sum=a[3];
    base=16;
    for(k=3;k>=1;k--)
    {
        sum=sum*base+a[k-1];
    }
    printf("result of %d",sum);
}

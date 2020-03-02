#include<stdio.h>
int main()
{
    long int n,a,i,j,b;
    scanf("%ld",&b);
if(b<1||b>200)
return 0;
    for(j=1;j<=b;j++){
    scanf("%ld",&n);
    if(n<=1||n>=2147483648)
    return 0;
    for(i=2;i<n;i++)
    {
       if(n%i==0)
       {break;}
    }
    if(i==n)
        printf("Prime\n");
    else printf("Not Prime\n");}
    return 0;
}
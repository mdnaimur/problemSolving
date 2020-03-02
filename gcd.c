#include<stdio.h>
int main()
{
    int a,b,x,y;
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        x=a;
    }
    else{
        x=b;
    }
    for(;x>=1;x--)
    {
        if(a%x==0&&b%x==0){
            y=x;

        }
    }
    printf("gcd is %d %d %d =%d",a,b,x,y);
    return 0;
}

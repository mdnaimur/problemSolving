#include <stdio.h>

int main ()

{
    int a,b,sum,n,i;

    scanf("%d",&n);
    {

       sum = 0;
       for (i=0;i<=n;i++){

            scanf("%d",a);
            sum=sum+a;
       }


       printf("%d\t",sum);
    }
    return 0;
    }

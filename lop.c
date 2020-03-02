#include<stdio.h>
int main()
{
    int n,sum,start,dif,end;
    scanf("%d%d%d",&start,&dif,&end);
    for(n=start,sum=0;n<=end;n=n+dif)
    {

     printf("%d\n",n);


 sum=sum+n;

}
  printf("sum is %d",sum);
    return 0;
    }

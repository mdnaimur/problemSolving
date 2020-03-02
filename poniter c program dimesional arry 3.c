#include<stdio.h>
void main()

{
    int sum,a[5],i;
    sum=0;
    for(i=0;i<5;i++)
    {
    printf("Enter the valu%d : ",i);
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    printf("Value of sum  :%d\n ",sum);

    }

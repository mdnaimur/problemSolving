#include<stdio.h>
void main()
{
    int a[10],i,j,temp,p,n;
    printf("Enter the value of n:=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the array element a[%d]:=",i);
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
        {for(j=1;j<=n-i;j++)
        if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }

    }

for(p=1;p<=n;p++)
{
    printf("the result of array %d\n",a[p]);
}
}

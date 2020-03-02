#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[6],i,k,n;
     printf("Enter the number of element n:=");
      scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the element of array a[%d]:=",i);
         scanf("%d",&a[i]);
    }
 printf("Enter the key item K:=");
    scanf("%d",&k);
for(i=1;i<=n;i++)
{
    if(a[i]==k)
    {


    printf("Found the key location:=%d\n",i);
    exit(0);
    }
}
if(i>n)
{
    printf("The key item not found in array\n");
}
}

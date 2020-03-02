#include<stdio.h>
#include<stdio.h>
void main()
{
    int a[6],i,k,n;
    printf("Enter the number of element n:=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the element of array a[%d]:=",i);
        scanf("%d",&a[i]);
    }
    printf("enter the key item k:=\n");
    scanf("%d",&k);
    for(i=1;i<=n;i++)\
    {

        if(a[i]==k)
    {
        printf("found the key location:=%d\n",i);
        exit(0);
    }
    }
    if(i>n)

        {
        printf("the key not found\n");
}

}

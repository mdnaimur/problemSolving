#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,k,n,A[10],low,high,mid;
    printf("Enter number of value n:=");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element of array A[%d]:= ",i);
        scanf("%d",&A[i]);
    }
    printf("Enter the value of key:=");
    scanf("%d",&k);
    low=1;
    high=n;
    while(low<=high)
    {
        mid=(low+high)/2;

        if(A[mid]==k)
        {
            printf("found locatin:=%d\n",mid);
            exit(0);
        }
        else if(A[mid]>k)
        {
            high=mid-1;
        }
        else
            low=mid+1;
    }
    if(low>high)
    {
        printf("Not Found");
    }
}

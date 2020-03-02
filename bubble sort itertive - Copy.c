#include<stdio.h>
void main()
{
    int A[10],i,j,n,k=0;
    printf("Enter the number of array elements n:=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter %d element of array A[]:=",i);
        scanf("%d",&A[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            if(A[j]>A[j+1])
            {
                A[k]=A[j];
                A[j]=A[j+1];
                A[j+1]=A[k];
            }
        }
    }
    printf("\n Sorted elements of array A[]:=");
    for(i=1;i<=n;i++)
    {
        printf("%d",A[i]);
    }
    printf("\n");
}

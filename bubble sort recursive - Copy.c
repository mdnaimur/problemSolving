#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int A[],int n);
int main()
{
    int i,n,A[10];
    printf("Enter the number of inputs:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("A[%d]:",i);
        scanf("%d",&A[i]);

    }
    bubbleSort(A,n);
    printf("After Bubble Sort:=");
    for(i=1;i<=n;i++)
    {
        printf("%d",A[i]);
    }
    printf("\n");
    return 0;
}
void bubbleSort(int A[],int n)
{
    int j=1,temp;
    if (n>1)
    {
        while(j<n)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
            j=j+1;
        }
        bubbleSort(A,n-1);
    }
    return ;
}

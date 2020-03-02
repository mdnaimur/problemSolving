#include<stdio.h>
#define M 3
int r=0;
int f=0;
int queue[M]={0};
int insert(int x);
void deletion();
int main()
{
    int i,x;
    for(i=0;i<M+1;i++)
    {
        printf("Enter the value to be inserted: ");
        scanf("%d",&x);
        insert(x);
        printf("\n");
    }
    printf("\n Insert Item  :%");
    for(i=1;i<M+1;i++)
    {
        printf("%d",queue[i]);
    }
    printf("\n");
    for(i=0;i<M+1;i++)
    {
        deletion();
    }
    printf("\n");
    return 0;
}
int insert(int x)
{
    r=(r+1)%(M+1);
    if(f==r)
    {
        printf("\n Queue is Over flow!!");
    }
    else
    {
        queue[r]=x;
    }
    return x;
}
void deletion()
{
    int x;
    int r=M;
    if(f==r)
    {
        printf("\n Qurue is underflow!!");
    }
    else
    {
        f=(f+1)%(M+1);
        x=queue[f];
        printf("\n delete value:%d",x);
        queue[f]=NULL;
    }
    return ;
}

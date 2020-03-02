#include<stdio.h>
#define SIZE 3
int top=-1;
int stack[SIZE]={0};
int push(int x);
int pop(




        );
int main()
{
    int i,x;
    for(i=1;i<5;i++)
    {
        printf("Enter the push value: ");
        scanf("%d",&x);
        push(x);
    }
    pop();
    pop();
    pop();
    pop();
    printf("\n");
    return 0;
}
int push(int x)
{
    if(top+1>SIZE)
    {
        printf("\n Overflow!!");
    }
    else
    {
        stack[top+1]=x;
        top=top+1;
    }
    return x;
}
int pop()
{
    int x;
    if(top=-1)
    {
        printf("\n under flow");
        return-1;
    }
    else
    {
        x=stack[top];
        printf("\n the pop value : %d",x);
        top=top-1;
        return x;
    }

}

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct list
{
    int data;
    struct list *next,*prev,*start;
    char ans;
};
typedef struct list node;
int main()
{
    fflush(stdout);
    printf("\n Do you want to create a node(Y/N):=");
    ffush(stdin);
    ans=toupper(getchar());
    if(ans=='Y')
    {
        start=(node*)malloc(sizeof(node));
        fflush(stdout);
        printf("Ener the data:=");
        fflush(stdin);
        scanf("%d",&start->data);
        start->next=NULL;
        prev=start;

    }else{

    temp=(node*)malloc(sizeof(node));
    fflush(stdout);
    printf("\Enter the data:");
    fflush(stdin);
    scanf("%d",&temp->data);
    temp->next=NULL;
    prev->next=temp;
    }
}
{
    while(ans='Y')
        printf("\n created list:");
    temp1=start;
    while(temp1!=NUll)
    {
        printf("%d",temp1->data);
        temp1=temp1->next;
    }printf("\n");
    printf("\n");
    return 0;
}

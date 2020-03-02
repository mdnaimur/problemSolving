#include<stdio.h>
int main()
{
    int n[5]={2,3,5,7,11};

     int i;
     for(i=1;i<=5;i++)
     {
         printf("i=roll:%d the number: %d\n",i,n[i-1]);
     }



    return 0;
}

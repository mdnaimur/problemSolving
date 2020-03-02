#include <stdio.h>
int main()
{
char r,ch ;
int n,i;
int k;
printf("Enter the value\t");
   while(scanf("%d",&n)!=EOF){

i=1;
while(i<=10){
   k=n*i;
   printf("%d*%d=%d \n",n,i,k);
    //printf("%d*%d= %d\n",n,i,n*i);
    i++;
}
   }
   return 0;
   }

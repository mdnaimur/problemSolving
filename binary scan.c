#include <stdio.h>

int main()
{
int bin,n,i=0,desi=0;
printf("Enter the number  =");
scanf("%d",&bin);
while(bin!=0){

    desi=desi+(bin%10)*pow(2,i++);
    bin=bin/10;
    }
    printf("decimal number is: %d",desi);
    return 0;
    }

#include <stdio.h>

int main ()

{
    int k,base,i;
    int a[6];
    long int sum;
     for (i=3;i>=0;i--)
     {
     scanf("%x",&a[i]);
     }
     sum = a[3];
     base =16;
     for(k=3;k>=1;k--)
     {
     sum = sum *base+a[k-1];
     }
     printf("%ld",&sum);

     return 0;}

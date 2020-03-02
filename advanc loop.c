#include <stdio.h>

int main ()

{
    int a,b,sum;

      while (scanf ("%d%d",&a,&b)!= EOF)
      {

      if (a==0&&b==0)

         return 0;

      sum =a+b;
      printf ("the sum is %d\n",sum);

      }
      return 0;

      }

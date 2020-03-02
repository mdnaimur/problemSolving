#include<stdio.h>
double add(double x,double y);
int main()
{
    double a=2.8, b=2.7,c;
    c=add(a,b);
    printf("%lf",c);
    return 0;
}
double add(double n, double m)
{
   double sum;
   sum=n+m;
   return sum;
}

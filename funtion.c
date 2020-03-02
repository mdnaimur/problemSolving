#include<stdio.h>
double add(double n,double m)
{
double sum =n+m;
return sum;
}
int main()
{
    double a,b,c;
    a=2.7;
    b=2.8;
    c= add(a,b);
    printf("%lf",c);
    return 0;
}

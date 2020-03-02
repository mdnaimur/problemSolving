#include<stdio.h>
int main()
{
    double cal,far;
    printf("Enter the celsius temperature :  ");
    scanf("%lf",&cal);
    far=cal*1.8+32;
    printf("The result in farenheit %lf \n",far);
    return 0;
}

#include<stdio.h>
int main()
{
    double la,ir,ny,ta,ma;
    printf("Enter the loan amount: ");
    scanf("%lf",&la);
    printf("Enter the interest rate: ");
    scanf("%ld",&ir);
    printf("Enter the number of Year: ");
    scanf("%lf",&ny);
    ta=la+la*ir/100;
    ma=ta/ny*12;
    printf("Total amount = %0.2lf\n",ta);
    printf("Monthly amount =%0.2lf \n",ma);
    return 0;
}

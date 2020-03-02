#include<stdio.h>
int main()
{
    double x,y,x_p_y,x_m_y;
    printf("Enter the value of x+y :");
    scanf("%lf",&x_p_y);
    printf("Enter the value of x-y :");
    scanf("%lf",&x_m_y);
    x=(x_p_y+x_m_y)/2;
    y=(x_p_y-x_m_y)/2;
    printf("x=%0.2lf  ,   y=%0.2lf\n",x,y);
    return 0;
}

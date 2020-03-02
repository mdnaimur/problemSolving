#include<stdio.h>
int main()
{
    int table[10][10];
    int i,j,n;
      for(i=1;i<=15;i++)
         {

        for(j=1;j<=15;j++)

        {
            table[i-1][j-1]=i*j;
        }
    }
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,table[n-1][i-1]);
    }
    return 0;
}

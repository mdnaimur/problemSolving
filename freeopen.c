#include<stdio.h>
int main()
{
    freopen("int.txt","r",stdin);
freopen("out.txt","w",stdout);
int n,m;
while(scanf("%d%d",&n,&m)==2)
printf("%d\n",n+m);
return 0;
       }

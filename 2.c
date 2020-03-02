#include<stdio.h>
#include<string.h>
int main()
{
    unsigned int x,y ,t ,res , set,fri,sat,sun,mon,turs,wed,thous;
    char s[100];
    scanf("%u %u",&x,&y);
    getc(s);
    if(s==fssri)
        {
    res=y-x%7;
    set=res+0;

    printf("%d",set);
    }
    else(s==sat){
        res=y-x%7;
    set=res+1;

    printf("%d",set);
    }
    if(s==sun)
    {
          res=y-x%7;
    set=res+2;

    printf("%d",set);
    }
    else(s==sun)
    {
          res=y-x%7;
    set=res+3;

    printf("%d",set);
    }
    if(s==mon)
    {
          res=y-x%7;
    set=res+4;

    printf("%d",set);
    }
    else(s==tues)
    {
          res=y-x%7;
    set=res+5;

    printf("%d",set);
    }
    if(s==wed)
    {
          res=y-x%7;
    set=res+6;

    printf("%d",set);
    }
    else (s==thurs)
        {
              res=y-x%7;
    set=res+7;

    printf("%d",set);
        }
    return 0;
}

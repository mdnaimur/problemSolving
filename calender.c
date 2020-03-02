#include <stdio.h>

#include <conio.h>

int main()

{

int date,month,y,y1,y2,a,b,c,d,re,sum,sum1,re1,tot;

printf("Instruction: At first give date(ex:17), then give year(ex:2014)\nthen type 1st two digit of year(ex:20).Next give last two digit of year(ex:14)\nAt last give month number(Ex:5)\n\n");





printf("Enter Date=\a");

scanf("%d",&date);

printf("Enter Year=\a");

scanf("%d",&y);



printf("Enter 1st two digits of Year=\a");

scanf("%d",&y1);



printf("Enter last two digits of Year=\a");

scanf("%d",&y2);

printf("Enter Month Number=\a");

scanf("%d",&month);



    if(month==1||month==10){

    a=5;

    if(y%4==0 && y%100!=0||y%400==0){

        if(month==1)

        a=4;            //লিপ ইয়ার হলে জানুয়ারী=৪ হবে ।

    }

    }

    if(month==2)

    a=1;

    if(y%4==0 && y%100!=0||y%400==0)

    {

        if(month==2)

        a=0;

    }

    if(month==3||month==11){

    a=1;

    }

    if(month==4||month==7){

    a=4;


    }

    if(month==5){

    a=6;

    }

    if(month==6){

    a=2;

    }

    if(month==8){

    a=0;

    }

    if(month==9||month==12){

    a=3;

    }



    sum=date+a;





    re=(y1%4);

    if(re==3){

    b=2;

    }

    if(re==2){

    b=4;

    }

    if(re==1){

    b=6;

    }

    if(re==0){

    b=1;

    }

    c=(y2/4);

    d=(y2+c);

    sum1=(b+d);

    tot=(sum+sum1);

    re1=tot%7;

    if(re1==0){

printf("\nDay= Sunday\a");

    }

    if(re1==1){

printf("\nDay= Monday\a");

    }

    if(re1==2){

printf("\nDay= Tuesday\a");

    }

    if(re1==3){

printf("\nDay= Wednesday\a");

    }

    if(re1==4){

printf("\nDay= Thursday\a");

    }

    if(re1==5){

printf("\nDay= Friday\a");

    }

    if(re1==6){

printf("\nDay= Saturday\a");

    }

getch();

    }

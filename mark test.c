#include<stdio.h>

int main()
{
    int marks;
    char grade;
  scanf("%d",&marks);
    if(marks>=80){
        grade='A+';
        printf("Your Grade is %c\n",grade);
    }
   else if(marks>=70){
        grade='A';
        printf("Your Grade is %c\n",grade);
    }
   else if(marks>=60){
        grade='B';
        printf("Your Grade is %c\n",grade);
    }

   else if(marks>=50){
        grade>='C';
        printf("Your Grade is %c\n",grade);
    }
    else if(marks>=40){
        grade='D';
        printf("Your Grade is %c\n",grade);
    }
    else
    {
        printf("your grade is F\t ");
    }
          return 0;

    }

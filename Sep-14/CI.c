//Company Insurance Method-2 (my way)
#include<stdio.h>
int main()

{
    char ms, sex;
    int age;

    printf("Enter your Marital Status (as y/n), sex(as m/f) and age\n");
    scanf("%c %c %d", &ms, &sex, &age);
    if (ms=='y')
    {
        printf("You are insured\n");
    }
    else if ((sex=='m')&&(age>30))
    {
         printf("You are insured\n");
    }
    else if ((sex=='f')&&(age>25))
     {
          printf("You are insured\n");
     }
    else 
     printf("You ain't insured");


    return 0;

}
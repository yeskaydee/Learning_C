#include<stdio.h>
int main()

{
    char ms, sex;
    int age;

    printf("Enter your Marital Status (as y/n), sex(as m/f) and age\n");
    scanf("%c %c %d", &ms, &sex, &age);

    if (ms=='y')
    printf("You are insured\n");

    else
    {
        if(sex=='m')
        {
            if (age>30)
                printf("You are insured\n");
            else
                printf("You are not insured\n");
        }
        else
        {
            if (age>25)
                printf("You are insured\n");
            else
                printf("You are not insured\n");
        }

    }

        
   
    return 0;

}
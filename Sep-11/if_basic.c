#include <stdio.h>
int main()
{
    int age;
    int vipPass  ;

    printf("Enter the number \n");
    scanf("%d", &age);

    printf("The number you have entered is %d and if you are VIP user and above age = 15 please enter positive number other than zero if not press 0 \n", age);

    scanf("%d", &vipPass);

    if ((age>=18 && age<=90)||(age>=15 && vipPass > 0))
    {
        printf("you can drive\n");
    }
    else   
     {
        printf("no you can't\n");
    }
}

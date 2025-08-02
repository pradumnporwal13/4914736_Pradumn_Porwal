#include <stdio.h>

int main()
{

    int age;
    char haveLicense;
    // ask for age?
    printf("Enter the Age : ");
    scanf("%d", &age);
    // ask does he/she has License or not?
    printf("Do you have License or not (y/n)?");
    scanf(" %c", &haveLicense);

    if (age >= 18 && haveLicense == 'y')
    {
        printf("Yes you are Eligible to drive \n");
    }
    else if (age >= 18 && haveLicense == 'n')
    {
        printf("You are eligible to drive but first have a License \n");
    }
    else
    {
        printf("no you are not Eligible to drive now \n");
    }
    return 0;
}
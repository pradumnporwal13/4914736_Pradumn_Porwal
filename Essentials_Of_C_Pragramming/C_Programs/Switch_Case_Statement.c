#include <stdio.h>

int main()
{
    int dayNum;
    printf("Enter the Day Number of Week : ");
    scanf("%d", &dayNum);

    switch (dayNum)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("wednesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 7:
        printf("Sunday \n");
        break;
    default:
        printf("Please Enter a valid Day Number \n");
        break;
    }

    return 0;
}
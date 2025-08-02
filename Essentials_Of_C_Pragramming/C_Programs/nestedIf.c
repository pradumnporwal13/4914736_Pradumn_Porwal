// checking which one is greatest between a,b,c
#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter a : ");
    scanf("%d", &a);

    printf("Enter b : ");
    scanf("%d", &b);

    printf("Enter c : ");
    scanf("%d", &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("a is greatest");
        }
        else
        {
            printf("c is greatest");
        }
    }
    if (c > b)
    {
        printf("c is greatest");
    }
    else
    {
        printf("b is greatest");
    }
}
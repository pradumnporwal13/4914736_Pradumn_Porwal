// take 3 positive integer and print the greatest of them

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);
    printf("Enter 3rd number : ");
    scanf("%d", &c);

    if (a > b){
        if (a > c){
            printf("%d is Greatest", a);}
        if (a < c){
            printf("%d is Greatest", c);}
    }
    else{
        if (b > c){
            printf("%d is Greatest", b);}
        else{
            printf("%d is Greatest",c);}
    }
}

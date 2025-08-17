// Take a positive integer input and tell it whether it is divisible by 5 and 3.

#include <stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    if( num%5 == 0 && num%3 == 0 ){ printf("Divisible by 5  and 3 both"); }
    else{printf("Divisible by 5  and 3 both");}
    return 0;
}


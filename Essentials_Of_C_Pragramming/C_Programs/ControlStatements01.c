// Input a Number and Determine whether it is odd or even.

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);

    if(num%2 == 0){
        printf("Number is Even");
    }
    else{
        printf("Number is odd");
    }
}
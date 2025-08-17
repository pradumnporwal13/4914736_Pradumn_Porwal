// Write a program to find whether the number is divisible by 5 or not ?

#include<stdio.h>
int main(){
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);

    if(num%5 == 0){
        printf("Number is divisible by 5");
    }else{
        printf("Number is not divisible by 5");
    }
}
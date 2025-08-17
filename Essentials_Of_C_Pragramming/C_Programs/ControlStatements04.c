// Write a program to print the absolute value of given integer
#include <stdio.h>

void printAbsoluteof(int num){
    if(num<0){
        int abs = num*(-1);
        printf("%d",abs);
    }
    else{printf("%d",num);}
}

int main(){
    int n ; 
    printf("Enter the number : ");
    scanf("%d",&n);  
    printAbsoluteof(n);
    return 0;
}


// Q. Take 3 number input and tell if they can be the sides of a triangle.

#include <stdio.h>

int main(){
    int s1, s2, s3;
    printf("Enter the side 1 : ");
    scanf("%d",&s1);
    printf("Enter the side 2 : ");
    scanf("%d",&s2);
    printf("Enter the side 3 : ");
    scanf("%d",&s3);

    if((s1+s2>s3) && (s1+s3>s2) && (s2+s3>s1)){
        printf("Triangle can be made with these sides");
    }
    else{printf("Triangle Can't be made with these sides");}

    return 0;
}



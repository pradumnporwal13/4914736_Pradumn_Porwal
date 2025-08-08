// Q. Write a Program to calculate sum of all the elements 
// of a 2D Array.

#include <stdio.h>

int main(){
    int arr2D[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int sum = 0;

    // Traversing through whole 2D Array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum += arr2D[i][j];
        }
    }
    printf("Sum of All Elements is : %d",sum);
    return 0;
}
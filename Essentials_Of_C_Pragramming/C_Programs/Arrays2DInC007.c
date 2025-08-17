// Q. Find the row with maximum sum in 2D Matrix.
// (Create a function which takes 2d array, rows, columns as input
// and return the index of row which has highest sum)
#include <stdio.h>

int rowWithMaximumSum(int *arr2D, int rows, int cols){
    int maxSum = -1;
    int rowWithMaxSum = -1;
    
    for (int i = 0; i < rows; i++){
        int sum = 0;
        for (int j = 0; j < cols; j++){
            sum += *(arr2D + i * cols + j);  // pointer arithmetic
        }
        if(sum > maxSum){
            maxSum = sum; 
            rowWithMaxSum = i;
        }
    }
    return rowWithMaxSum;
}

int main(){
    int arr2D[3][4] = {{2, 5, 2, 40}, {5, 9, 3, 2}, {2, 9, 6, 3}};
    printf("row with maximum sum is : %d", rowWithMaximumSum((int*)arr2D,3,4));
    return 0;
}
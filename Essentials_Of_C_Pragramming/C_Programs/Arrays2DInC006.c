// Q. Write a Program to count the number of 1 in the each row 
// and return the row number which has maximum number of 1.
#include <stdio.h>

int rowWithMaximumNumOfOne(int* arr2D,int row,int col){
    
    int maxNumOf1 = 0;
    int rowIndexWhichHasMaxNumOf1 = -1;

    for(int i=0;i<row;i++){
        int count_1 = 0;
        for(int j=0;j<col;j++){
            if(*(arr2D + i*col + j) == 1) {  // ✅ pointer arithmetic
                count_1++;
            }
        }
        if(count_1 > maxNumOf1){
            maxNumOf1 = count_1;
            rowIndexWhichHasMaxNumOf1 = i;
        }
    }
    return rowIndexWhichHasMaxNumOf1;
}

int main(){
    int arr2D[5][3] = {{1,0,0},{0,0,0},{1,1,0},{1,1,1},{0,0,1}};
    printf("Row with maximum number of 1 : %d",rowWithMaximumNumOfOne((int*)arr2D,5,3));
    return 0;
}
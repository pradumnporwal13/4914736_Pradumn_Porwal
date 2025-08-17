#include <stdio.h>

#define ROWS 2
#define COLS 3 

int main(){

    int arr2D[ROWS][COLS] = {{1,2,3},{4,5,6}};

    int Transpose[COLS][ROWS]; // Created a new Transpose matrix 

    for(int i=0;i<COLS;i++){
        for(int j=0;j<ROWS;j++){
            Transpose[i][j] = arr2D[j][i];
        }
    }

    // print the transpose 
    for(int i=0 ;i<COLS;i++){
        for(int j=0;j<ROWS;j++){
            printf("%d ",Transpose[i][j]);
        }
        printf("\n");
    }
}
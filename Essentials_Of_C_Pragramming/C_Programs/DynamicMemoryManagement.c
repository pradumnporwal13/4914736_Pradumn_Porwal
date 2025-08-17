#include <stdio.h>
#include <stdlib.h> // for functions like malloc(), calloc(), realloc(), free()

int main(){

    int* ptr;
    ptr = (int*)malloc(10*sizeof(int)); // malloc() will return a memory of 10 x 4 Bytes = 10 Blocks
    // initially ptr will point to the first block of allocated memory
    // (int*) type casting => each block can store an integer 
    printf("%d",sizeof(ptr)); // => 4 Bytes, kyuki abhi ptr 1st block ki taraf point karega 
    printf("\n");
    // to traverse and fill the memory allocated by malloc 
    for(int i=0;i<10;i++){
        printf("Input element of block %d : ",i);
        scanf("%d \n",&ptr[i]); // take input at every index
    }
    // to traverse and print the elements of allocated memory 
    for(int i=0;i<10;i++){
        printf("Element at block %d is %d",i,ptr[i]);
        printf("\n");
    }
    return 0;
}
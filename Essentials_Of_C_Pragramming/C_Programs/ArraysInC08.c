// Q. Find the difference between the sum of elements at even indices 
// to the sum of elements at odd indices.
#include <stdio.h>
#include <stdlib.h>

int main(){

    int arr[10] = {43,23,67,34,19,32,65,84,73,61};
    int len = sizeof(arr)/sizeof(arr[0]);
    int oddSum  = 0;
    int evenSum = 0;

    for(int i=0; i<len ;i++){
        if(i%2==0){evenSum+=arr[i];}
        else{oddSum+=arr[i];}
    }

    printf("Difference between odd, even indices elements are : %d",abs(oddSum - evenSum));
    return 0;
}
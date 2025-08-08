// Q. Find the duplicate element in the Array.
#include <stdio.h>

int findDuplicate(int* arr, int len){
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}

int main(){

    int arr[10] = {12,89,76,34,23,54,90,14,67,54};
    printf("%d",findDuplicate(arr,10));
 
    return 0;
}
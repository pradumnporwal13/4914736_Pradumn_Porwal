#include <stdio.h>

int main(){
    int arr[10] = {12,34,65,32,21,90,54,67,89,21};
    int len = sizeof(arr)/sizeof(arr[0]);

    // Upadate the Array
    for(int i = 0;i<len;i++){
        if(i%2 == 0){
            arr[i] = arr[i] * 2;
        }
        if(i%2 != 0){
            arr[i] += 10;
        }
    }

    // Display the updated Array;
    for(int i=0;i<len;i++){
        printf("%d ,",arr[i]);
    }
    return 0;
}
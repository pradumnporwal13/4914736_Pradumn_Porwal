// WAP to calculate the sum of all the elements of an array
#include <stdio.h>

int main(){
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sumOfElement = 0;
    for(int i=0;i<n;i++){
        sumOfElement += arr[i];
    }
    printf("%d",sum);
    return 0;
}


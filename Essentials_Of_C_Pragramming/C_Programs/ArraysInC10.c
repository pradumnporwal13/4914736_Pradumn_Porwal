// Find total number of triplet whose sum adds up to x

#include <stdio.h>
int countTriplet(int* arr,int len, int x){
    int count = 0;
    
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            for(int k=j+1;k<len;k++){
                if(arr[i]+arr[j]+arr[k] == x){
                    count++;
                }
            }
        }
    }
    return count;
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; 
    int len = sizeof(arr)/sizeof(arr[0]);
    printf("%d",countTriplet(arr,len,15));
    return 0;
}
// Q. Check If the given Array is Palindrome or not.
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int* arr,int len){

    int i = 0;
    int j = len-1;
    while(i<len/2){
        if(arr[i] != arr[j]){
         return false;   
        }
        i++;
        j--;
    }
    return true;
}

int main(){
    int arr[10] = {23,25,62,13,90,37,89,27,17,82};
    int arr2[10] = {23,25,62,13,90,90,13,62,25,23};
    printf("%d",isPalindrome(arr,10));
    printf("%d",isPalindrome(arr2,10));
}

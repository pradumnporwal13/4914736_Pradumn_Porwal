#include <stdio.h>
int main(){
    int arr[10] = {12,13,45,65,32,25,98,45,23,54};
    int len = sizeof(arr)/sizeof(arr[0]);
    int x = 20;
    int CountGreaterthanX = 0 ;

    for(int i=0; i<len; i++){
        if(arr[i]>x){
            CountGreaterthanX++;
        }
    }

    printf("%d",CountGreaterthanX);

    return 0;
}
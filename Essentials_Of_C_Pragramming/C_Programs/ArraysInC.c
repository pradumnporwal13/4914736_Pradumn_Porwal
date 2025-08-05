// Taking input and displaying output of an array
#include <stdio.h>

int main(){
    int n;
    printf("Enter the Size of Array you want: ");
    scanf("%d", &n);

    int arr[n];  // Variable Length Array (allowed in C99 and above)

    printf("\n");

    // Taking input 
    for(int i = 0; i < n; i++){
        printf("Enter the %d element: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    // Showing the complete array
    printf("The array elements are: ");
    for(int i = 0; i < n; i++){
        printf("%d ,", arr[i]);
    }

    return 0;
}

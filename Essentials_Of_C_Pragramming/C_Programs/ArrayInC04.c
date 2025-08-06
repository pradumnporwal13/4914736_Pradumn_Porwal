// WAP to find the Largest element in an array

#include <stdio.h>
int main()
{
    int arr[10] = {12, 34, 56, 89, 97, 905, 65, 76, 32, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxElem = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (maxElem < arr[i])
        {
            maxElem = arr[i];
        }
    }
    printf("Largest Element is : %d", maxElem);
    return 0;
}

// WAP to find the smallest element in an array

#include <stdio.h>
int main()
{
    int arr[10] = {23, 56, 43, 12, 90, 65, 15, 7, 9, 23};

    int n = sizeof(arr) / sizeof(arr[0]);
    int minNum = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (minNum > arr[i])
        {
            minNum = arr[i];
        }
    }
    printf("Smallest Element in the array is : %d", minNum);
    return 0;
}

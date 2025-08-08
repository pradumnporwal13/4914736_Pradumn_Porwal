// Q. Check if the given element is present in an Array or not ?

#include <stdio.h>
#include <stdbool.h>

bool checkElement(int *arr, int len, int elem)
{

    for (int i = 0; i < len; i++)
    {
        if (arr[i] == elem)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("%d", checkElement(arr, len, 6));  // true  =>1
    printf("%d", checkElement(arr, len, 10)); // false =>0
}
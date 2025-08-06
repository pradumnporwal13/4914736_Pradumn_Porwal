// WAP to print the elements of Array greater than 35
#include <stdio.h>

int main()
{
    int arr[10] = {23, 54, 2, 26, 23, 13, 90, 46, 23, 97};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 35)
        {
            printf("%d, ", arr[i]);
        }
        else
        {
            continue;
        }
    }
    return 0;
}

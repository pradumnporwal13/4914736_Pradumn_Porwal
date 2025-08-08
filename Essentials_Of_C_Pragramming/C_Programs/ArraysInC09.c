// Find the total num of pairs in the array
// whose sum is equal to the given value x
#include <stdio.h>
int countPairs(int *arr, int len, int x)
{
    int count_x = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                count_x++;
            }
        }
    }
    return count_x;
}

int main()
{
    int arr[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("%d", countPairs(arr, len, 12));
    return 0;
}

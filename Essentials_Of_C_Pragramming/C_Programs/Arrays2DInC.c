// printing 2D Array
#include <stdio.h>

int main()
{
    int rows = 3;
    int cols = 3;
    int arr2d[2][2] = {{1, 2, 3}, {3, 4, 5}, {5, 7, 8}}; // Declaring and initializing the 2D Array
    // 1 2 3
    // 3 4 3
    // 3 3 2
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr2d[i][j]);
            ;
        }
        printf("\n");
    }
    return 0;
}

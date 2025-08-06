// Write a Program to take input form user and displaying it
#include <stdio.h>

int main()
{
    int rows;
    int cols;
    printf("Enter the num of Rows : ");
    scanf("%d", &rows);
    printf("Enter the num of cols : ");
    scanf("%d", &cols);

    int a[rows][cols]; // Declaring a 2D Array

    // For taking Input in Array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter Elem at %d,%d : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // For displaying the 2D Array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d, ", a[i][j]);
        }
        printf("\n");
    }
}
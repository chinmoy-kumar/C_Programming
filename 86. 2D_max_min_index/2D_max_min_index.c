// problem: Take input an 2D array. Find out the max element and min element in that 2D array. Also print the index of max element and min element.

#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter row number: ");
    scanf("%d", &row);
    printf("Enter column number: ");
    scanf("%d", &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int maxValue = arr[0][0];
    int x = 0;
    int y = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (maxValue < arr[i][j])
            {
                maxValue = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("The max value is: %d\n", maxValue);
    printf("The index of max value is: (%d, %d)\n", x, y);

    int minValue = arr[0][0];
    x = 0;
    y = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (minValue > arr[i][j])
            {
                minValue = arr[i][j];
                x = i;
                y = j;
            }
        }
    }
    printf("The min value is: %d\n", minValue);
    printf("The index of min value is: (%d, %d)\n", x, y);

    return 0;
}
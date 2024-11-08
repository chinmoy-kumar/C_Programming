// problem: Take input of 2D array and print the input in row column formate.

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

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

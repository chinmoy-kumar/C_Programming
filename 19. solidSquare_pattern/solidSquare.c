// problem: print a solid square pattern based on user input.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    int m;
    printf("Enter number of columns: ");
    scanf("%d", &m);

    for (int i = 0; i < n; i++) // outer loop -> no of lines or rows
    {
        for (int j = 0; j < m; j++) // inner loop -> no of stars in each line or no of columns
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
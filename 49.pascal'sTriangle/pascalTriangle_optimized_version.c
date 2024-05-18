//problem:  You are given an integer ‘N’. You need to return the first ‘N’ rows of Pascal’s triangle.
// pascalTriangle optimized version

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        int first = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", first);
            first = first * (i - j) / (j + 1); // iC(j+1)
        }
        printf("\n");
    }

    return 0;
}

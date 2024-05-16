// print the given pattern
// *********
// **** ****
// ***   ***
// **     **
// *       *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    n = n - 1;
    int nst = n; // number of stars
    int nsp = 1; // number of spaces

    for (int m = 1; m <= 2 * n + 1; m++) // first line
    {
        printf("*");
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }

        nst--;
        nsp += 2;

        printf("\n");
    }

    return 0;
}
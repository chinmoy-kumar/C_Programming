// print the given pattern
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter an odd number for rows: ");
    scanf("%d", &n);

    int nsp = (n / 2);    // nsp => number of spaces
    int nst = 1;          // nst => number of stars
    int ml = (n / 2) + 1; // ml => middle line

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++) // for spaces
        {
            printf(" ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("*");
        }

        if (i < ml)
        {
            nsp--;
            nst += 2;
        }
        else
        {
            nsp++;
            nst -= 2;
        }
        printf("\n");
    }

    return 0;
}
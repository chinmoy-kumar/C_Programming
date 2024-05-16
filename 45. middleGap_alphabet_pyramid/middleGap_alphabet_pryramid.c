// print this given pattern
// ABCDEFG
// ABC EFG
// AB   FG
// A     G

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    int nst = n;
    int nsp = 1;

    for (int m = 1; m <= 2 * n + 1; m++)
    {
        char ch = (char)m + 64;
        printf("%c", ch);
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            char ch = (char)a + 64;
            printf("%c", ch);
            a++;
        }

        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
            a++;
        }

        for (int j = 1; j <= nst; j++)
        {
            char ch = (char)a + 64;
            printf("%c", ch);
            a++;
        }

        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}
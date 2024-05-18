//problem:  You are given an integer ‘N’. You need to return the first ‘N’ rows of Pascal’s triangle.

#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {

        fact = fact * i;
    }
    return fact;
}

int combination(int n, int r)
{
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}

int main()
{
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int iCj = combination(i, j);
            printf("%d ", iCj);
        }
        printf("\n");
    }

    return 0;
}
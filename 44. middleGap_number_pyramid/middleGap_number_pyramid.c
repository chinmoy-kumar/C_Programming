// print the given pattern
// 1234567 
// 123 567
// 12   67
// 1     7
// (Take input 3 for this exact result)

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the nubmer of rows: ");
    scanf("%d", &n);

    int nst = n;
    int nsp = 1;
    int a = 1;

    for (int i = 1; i <= 2*n+1; i++)
    {
        printf("%d", i);
    }
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        int a = 1;
        for (int k = 1; k <= nst; k++)
        {
            printf("%d", a);
            a++;
        }

        for (int j = 1; j <= nsp; j++)
        {
            printf(" ");
            a++;
        }

        for (int k = 1; k <= nst; k++)
        {
            printf("%d", a);
            a++;
        }
        printf("\n");
        nst--;
        nsp += 2;
    }

    return 0;
}
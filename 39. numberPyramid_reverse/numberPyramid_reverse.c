// print the given pattern
//     1
//    121
//   12321
//  1234321
// 123454321

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        int a = i - 1;
        for (int m = 1; m <= i - 1; m++)
        {
            printf("%d", a);
            a--;
        }
        printf("\n");
    }

    return 0;
}
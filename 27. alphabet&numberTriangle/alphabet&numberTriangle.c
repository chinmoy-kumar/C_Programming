// Problem: print the given pattern
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            int a = 65;
            for (int j = 1; j <= i; j++)
            {
                char ch = (char)a;
                printf("%c ", a);

                a = a + 1;
            }

            printf("\n");
        }
        else
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
            printf("\n");
        }
    }

    return 0;
}
// problem: print the given pattern
//     A
//    AB
//   ABC
//  ABCD
// ABCDE

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
        int a = 65;

        for (int k = 1; k <= i; k++)
        {

            printf("%c", a);
            a++;
        }
        printf("\n");
    }
}

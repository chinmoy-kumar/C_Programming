// print the given pattern
//     A
//    ABC
//   ABCDE
//  ABCDEFG
// ABCDEFGHI

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
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            char ch = (char)a;
            printf("%c", ch);
            a = a + 1;
        }

        printf("\n");
    }

    return 0;
}
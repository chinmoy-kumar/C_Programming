// problem: Take input n and print after and before from n to till n using recursion.

#include <stdio.h>

void increasing(int x)
{
    if (x == 0)
        return;
    printf("%d\n", x);
    increasing(x - 1);
    printf("%d\n", x);
    return;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    increasing(n);
}
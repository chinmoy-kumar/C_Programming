//problem: Print sum from 1 to n using recursion. (parameterized)

#include <stdio.h>
void sum(int n, int s)
{
    if (n == 0) // base case
    {
        printf("%d\n", s);
        return;
    }
    sum(n - 1, s + n);
    return;
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    sum(n, 0);

    return 0;
}
#include <stdio.h>
void zigzag(int a)
{
    if (a == 0)
        return;
    printf("%d ", a);
    zigzag(a - 1);
    printf("%d ", a);
    zigzag(a - 1);
    printf("%d ", a);
    return;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    zigzag(n);

    return 0;
}
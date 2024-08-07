// problem: swap the values of two number without using a third variable.

#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    temp = 0;

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of a: %d\n", a);
    printf("The value of b: %d\n", b);

    return 0;
}
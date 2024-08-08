// problem: swap the values of two number without using pointer.

// using pass by referance pointer method

#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

int main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    int *x = &a;
    int *y = &b;

    swap(x, y);

    printf("The value of a is: %d\n", *x);
    printf("The value of b is: %d", *y);

    return 0;
}
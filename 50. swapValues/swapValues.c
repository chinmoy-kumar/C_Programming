// problem: swap the value of two numbers.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    int b;
    printf("Enter b: ");
    scanf("%d", &b);

    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The swaped value of a is: %d\n", a);
    printf("The swaped value of b is: %d\n", b);

    return 0;
}
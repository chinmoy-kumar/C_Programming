// Problem: Print the nth fibonacci number.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int a = 1, b = 1, sum = 1;
    for (int i = 1; i <= num - 2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("The %dth fibonacci is: %d", num, sum);

    return 0;
}
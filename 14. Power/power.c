//problem: Problem: Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.

#include <stdio.h>
int main()
{
    int base, power;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &power);

    int i, result = 1;
    for (int i = 1; i <= power; i += 1)
    {
        result = result * base;
    }
    printf("%d raised to the power %d is %d", base, power, result);

    return 0;
}
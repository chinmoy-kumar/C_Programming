// Problem: WAP to print reverse of a given number.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int reverse, lastDigit;
    reverse = 0;
    lastDigit = 0;
    while (num > 0)
    {
        lastDigit = num % 10;
        reverse = (reverse * 10) + lastDigit;
        num = num / 10;
    }
    printf("The reverse of that number is: %d", reverse);

    return 0;
}
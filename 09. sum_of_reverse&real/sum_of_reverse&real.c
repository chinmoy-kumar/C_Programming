// Problem: WAP to print the sum of given number and its reverse.

#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter a number: ");
    scanf("%d", &num1);
    num2 = num1;
    
    int sum = 0, reverse = 0, lastDigit = 0;
    while (num1 > 0)
    {
        lastDigit = num1 % 10;
        reverse = (reverse * 10) + lastDigit;
        num1 = num1 / 10;
    }

    sum = num2 + reverse;
    printf("The sum is: %d", sum);

    return 0;
}

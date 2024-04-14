// Problem: WAP to print sum of all the even digits of a given number.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int lastDigit, sum;

    while (num > 0)
    {
        lastDigit = num % 10;
        if (lastDigit % 2 == 0)
        {
            sum = sum + lastDigit;
        }
        num = num / 10;
    }
    printf("The sum of all even numbers is: %d", sum);

    return 0;
}

// Problem: Write a program to count digits of a given number.

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int count = 0;
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }
    printf("The no of digits is: %d", count);

    return 0;
}
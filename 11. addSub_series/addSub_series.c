//Problem: WAP to print the sum of this series: 1-2+3-4+5-6+7...upto 'n'

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the last number: ");
    scanf("%d", &num);

    int sum = 0;
    if (num % 2 == 0)
    {
        sum = -(num / 2); // for even numbers
        printf("The sum is: %d", sum);
    }
    else
    {
        sum = -(num / 2) + num; // for odd numbers
        printf("The sum is: %d", sum);
    }

    return 0;
}

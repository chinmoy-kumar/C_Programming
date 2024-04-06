#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sum = 0, ld; // ld = last digit
    while (num != 0)
    {
        ld = num % 10;
        sum = sum + ld;
        num = num / 10;
    }
    printf("The sum is: %d", sum);
}
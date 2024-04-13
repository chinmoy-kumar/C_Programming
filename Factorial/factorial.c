//problem: Print the factorial of a given number 'n'

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int factorial = 1;
    for (int i = 0; num > 0; num--)
    {
        factorial = factorial * num;
    }
    printf("The factorial is: %d", factorial);

    return 0;
}
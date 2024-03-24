#include <stdio.h>
int main()
{
    int n, a;
    printf("Enter a number to check: ");
    scanf("%d", &n);

    a = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            a += 1;
            break;
        }
    }
    if (n == 1)
    {
        printf("1 is neither prime nor composite number");
    }
    else if (a == 0)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is a composite number", n);
    }

    return 0;
}

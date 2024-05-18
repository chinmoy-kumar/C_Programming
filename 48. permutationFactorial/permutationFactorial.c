// What is permutation?
// Ans: The permutation formula calculates the number of ways to arrange a set of n distinct objects taken r at a time, where r is less than or equal to n. In permutations, the order of selection matters.

#include <stdio.h>
int factorial(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int permutation(int n, int r)
{
    int npr = factorial(n) / factorial(n - r);
    return npr;
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int r;
    printf("Enter the value of r: ");
    scanf("%d", &r);

    int npr = permutation(n, r);
    printf("Answer is: %d", npr);

    return 0;
}
//Problem: Display this GP - 100,50,25,.. upto ‘n’ terms.

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    float i, j;
    j = 100;
    for (i = 1; i <= n; i++)
    {
        printf("%0.2f ", j);
        j = j * (0.5); 
    }

    return 0;
}
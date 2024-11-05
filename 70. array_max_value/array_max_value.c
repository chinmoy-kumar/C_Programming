// problem: First ask user how much value user want to give as input then take input as an array and find the max value among them.

/* method-01 (without using extra library)
-------------------------------------------
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the amount of value you want to input: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter %d numbers: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    int maxValue = arr[0];
    for (int j = 0; j <= n - 1; j++)
    {
        if (maxValue < arr[j])
        {
            maxValue = arr[j];
        }
    }
    printf("The max value is: %d\n", maxValue);

    return 0;
}
*/

// method-02 (using extra library)
// --------------------------------
#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    printf("Enter the amount of value you want to input: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter %d numbers: ", i+1);
        scanf("%d", &arr[i]);
    }

    int maxValue = INT_MIN; // INT_MIN means -2147483648 
    
    for (int j = 0; j <= n - 1; j++)
    {
        if (maxValue < arr[j])
        {
            maxValue = arr[j];
        }
    }
    printf("The max value is: %d\n", maxValue);

    return 0;
}
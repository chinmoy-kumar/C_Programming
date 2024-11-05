// problem: Find the difference between the sum of elements at even indexes to the sum of elements at odd indexes.

#include <stdio.h>
int main()
{
    int e;
    printf("Enter array element number: ");
    scanf("%d", &e);
    int arr[e];

    printf("Enter array elements: ");
    for (int i = 0; i < e; i++)
        scanf("%d", &arr[i]);

    int oddSum = 0;
    int evenSum = 0;
    int diff;
    for (int j = 0; j < e; j++)
    {
        if (j % 2 == 0)
            oddSum += arr[j];
        else
            evenSum += arr[j];
    }
    if (oddSum > evenSum)
        diff = oddSum - evenSum;
    else
        diff = evenSum - oddSum;

    printf("The difference of sum of odd and even elements is: %d\n", diff);

    return 0;
}

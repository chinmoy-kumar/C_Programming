// problem: Count the number of triplets whose sum is equal to the given value x. Also print those triplets. (Don't print and count repeat triplets)

#include <stdio.h>
int main()
{
    int e;
    printf("Enter array element number: ");
    scanf("%d", &e);

    int arr[e];
    int givenValue;
    printf("Enter array elements: ");
    for (int i = 0; i < e; i++)
        scanf("%d", &arr[i]);
    printf("Enter the given value: ");
    scanf("%d", &givenValue);

    int totalTriplets = 0;
    for (int i = 0; i < e; i++)
    {
        for (int j = i + 1; j < e; j++)
        {
            for (int k = j + 1; k < e; k++)
            {
                if (arr[i] + arr[j] + arr[k] == givenValue)
                {
                    totalTriplets = totalTriplets + 1;
                    printf("(%d, %d)\n", arr[i], arr[j]);
                }
            }
        }
    }

    if (totalTriplets >= 1)
        printf("The total number of pairs: %d\n", totalTriplets);
    else
        printf("No number of pairs found.\n");

    return 0;
}

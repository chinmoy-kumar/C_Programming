// problem: Find the total number of pairs in the Array whose sum is equal to the given value x. Also print those pairs. (Don't print and count repeat triplets)

#include <stdio.h>
int main(){
    int e;
    printf("Enter array element number: ");
    scanf("%d", &e);

    int arr[e];
    int givenValue;
    printf("Enter array elements: ");
    for (int i = 0; i < e; i++)
        scanf("%d", &arr[i]);
    printf("Enter the sum of pair: ");
    scanf("%d", &givenValue);
    
    int totalPair = 0;
    for (int i = 0; i < e; i++)
    {
        for (int j = i + 1; j < e; j++)
        {
            if (arr[i] + arr[j] == givenValue)
            {
                totalPair = totalPair + 1;
                printf("(%d, %d)\n", arr[i], arr[j]);
            }
        }
    }
    
    if (totalPair >= 1)
        printf("The total number of pairs: %d\n", totalPair);
    else
        printf("No number of pairs found.\n");
    

    return 0;
}

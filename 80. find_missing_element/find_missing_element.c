// problem: Give an array containing elements from 1 to 20 except one element in this range is missing. Find the missing element.

#include <stdio.h>
int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 20}; // given in the question

    int size = sizeof(arr)/ sizeof(arr[0]);

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    int sum2 = 0;
    sum2 = size * (size + 1) / 2;
    int finalAns = sum2 - sum;
    printf("Missing element is: %d\n", finalAns);

    return 0;
}
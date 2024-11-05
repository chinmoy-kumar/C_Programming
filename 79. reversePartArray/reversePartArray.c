// problem: Take input an array and also take input the start point and ending point then reverse that specific part of that array.

#include <stdio.h>
void reversePart(int arr[], int si, int ei)
{
    int temp;
    for (int i = si, j = ei; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}

int main()
{
    int e;
    printf("Enter array element number: ");
    scanf("%d", &e);
    int arr[e];
    printf("Enter array elements: ");
    for (int i = 0; i < e; i++)
        scanf("%d", &arr[i]);

    int a, b;
    printf("Enter the starting point for reverse: ");
    scanf("%d", &a);
    printf("Enter the ending point for reverse: ");
    scanf("%d", &b);

    a = a - 1;
    b = b - 1;

    reversePart(arr, a, b);

    for (int i = 0; i < e; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
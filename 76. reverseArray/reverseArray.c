// problem: Write a program to copy the contents of one array into another in the reverse order.

#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5];

    for (int i = 0; i <= 4; i++)
    {
        brr[i] = arr[4 - i];
    }
    
    for (int j = 0; j <= 4; j++)
    {
        printf("%d ", brr[j]);
    }

    return 0;
}
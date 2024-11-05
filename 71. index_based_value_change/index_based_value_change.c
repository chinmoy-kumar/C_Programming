// problem: Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed value by 10.

#include <stdio.h>
int main()
{
    int arr[5] = {3, 5, 6, 7, 10};

    for (int i = 0; i < 5; i++)
    {
        if (i % 2 != 0)
            arr[i] *= 2;
        else
            arr[i] += 10;
    }

    for (int j = 0; j < 5; j++)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}

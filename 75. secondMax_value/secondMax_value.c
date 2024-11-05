// problem: Find the second largest element in the given array.

/*
method-01 (using two loops)
---------------------------------------

#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 30, 14, 5};
    int max = arr[0];
    int secMax = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > secMax && arr[i] != max)
            secMax = arr[i];
    }
    printf("The second max value is: %d\n", secMax);

    return 0;
}
*/

// method-01 (using one loop)
// ----------------------------
#include <stdio.h>
int main()
{
    int arr[5] = {1, 4, 5, 3 , 2};
    int max = arr[0];
    int secMax = arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i]){
            secMax = max;
            max = arr[i];
        }
        else if(secMax < arr[i] && arr[i] != max){
            secMax = arr[i];
        }
    }

    printf("The second max value is: %d\n", secMax);
    printf("The max value is: %d\n", max);

    return 0;
}


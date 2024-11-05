// problem: Calculate the sum of all the elements in the given array.

#include <stdio.h>
int main()
{
    int arr[5] = {1, 5, 5, 5, 5};
    int sum = 0;

    for(int n = 0; n < 5; n++){
        sum = sum + arr[n];
    }
    printf("The sum is: %d\n", sum);

    return 0;
}

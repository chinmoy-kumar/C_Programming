// Problem: Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz (0, 0).

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the value of x-axis: ");
    scanf("%d", &x);
    printf("Enter the value of y-axis: ");
    scanf("%d", &y);

    if (x == 0 && y == 0)
    {
        printf("It lies on the origin.");
    }
    else if (x == 0)
    {
        printf("It lies on the y-axis.");
    }
    else if (y == 0)
    {
        printf("It lies on the x-axis");
    }
    else
    {
        printf("The point doesn't lie on x-axis or y-axis.");
    }

    return 0;
}
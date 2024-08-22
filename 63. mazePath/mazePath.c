// problem: Find the total number of ways for a maze path. Consider only one step at a time in right way and down way only.

#include <stdio.h>
// cr = current row
// cc = current column
// er = ending row
// ec = ending column
int maze(int cr, int cc, int er, int ec)
{
    int rightWays = 0;
    int downWays = 0;
    if (cr == er && cc == ec)
        return 1; // base case

    if (cr == er) // only rightWays call
    {
        rightWays = rightWays + maze(cr, cc + 1, er, ec);
    }
    if (cc == ec) // only downWays call
    {
        downWays = downWays + maze(cr + 1, cc, er, ec);
    }
    if (cr < er && cc < ec)
    {
        rightWays = rightWays + maze(cr, cc + 1, er, ec);
        downWays = downWays + maze(cr + 1, cc, er, ec);
    }

    int totalWays = rightWays + downWays;
    return totalWays;
}

int main()
{
    int n; // no of rows
    printf("Enter no of rows of the maze: ");
    scanf("%d", &n);
    int m; // no of columns
    printf("Enter no of columns of the maze: ");
    scanf("%d", &m);

    int noOfWays = maze(1, 1, n, m);
    printf("The number of ways is: %d\n", noOfWays);

    return 0;
}
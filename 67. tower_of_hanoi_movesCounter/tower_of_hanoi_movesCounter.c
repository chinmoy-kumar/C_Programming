// problem: Take input of disk number and print steps to solve the "Tower of Hanoi" based on disk number and also print the number of moves has used. (Solved by myself)

#include <stdio.h>
int totalMoves = 0;
int tower(int x, char s, char h, char d)
{
    if (x == 0) // base case
        return 0; 
    tower(x - 1, s, d, h);
    printf("%c -> %c\n", s, d);
    totalMoves = totalMoves + 1;
    tower(x - 1, h, s, d);
    return totalMoves;
}
int main()
{
    int n;
    printf("NOTE: Minimum Disk input is 2\n");
    printf("Enter number of disks: ");
    scanf("%d", &n);

    int a = tower(n, 'A', 'B', 'C');
    printf("The minimum number of Moves: %d\n", a);

    return 0;
}
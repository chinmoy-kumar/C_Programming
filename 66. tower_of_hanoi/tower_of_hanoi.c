// problem: Take input of disk number and print steps to solve the "Tower of Hanoi" based on disk number.

#include <stdio.h>
// s = source
// h = helper
// d = destination
void tower(int n, char s, char h, char d)
{
    if (n == 0) //base case
        return;
    tower(n - 1, s, d, h);
    printf("%c -> %c\n", s, d);
    tower(n - 1, h, s, d);
    return;
}

int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);

    tower(n, 'A', 'B', 'C');

    // Here A, B, C are three rod names.

    return 0;
}
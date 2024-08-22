// problem: Find the total number of ways for a maze path. Consider only one step at a time in right way and down way only. (optimized)

#include <stdio.h>
int maze(int x, int y){
    int rightWay = 0;
    int downWay = 0;

    if(x == 1 && y == 1)  return 1; // base case

    if (x == 1) // only go right way
    {
        rightWay = rightWay + maze(x, y-1);
    }
    if (y == 1) // only go down way
    {
        downWay = downWay + maze(x-1, y);
    }
    if (x>1 && y>1)
    {
        rightWay = rightWay + maze(x, y-1);
        downWay = downWay + maze(x-1, y);
    }

    int totalWays = rightWay + downWay;
    return totalWays;
    
    
}

int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int noOfWays = maze(n, m);

    printf("The number of ways is: %d\n", noOfWays);

    return 0;
}
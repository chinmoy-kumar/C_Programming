// problem: Find the number of ways, so that the person reaches the top. Consider only single step and double step. (not understand yet this problem).

#include <stdio.h>
int stair(int n){
    if(n == 1 || n == 2)
        return n;
    int totalWays = stair(n-1) + stair(n-2);
    return totalWays;
}

int main(){
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d", &n);

    int ways = stair(n);
    printf("Total ways is: %d\n", ways);


    return 0;
}
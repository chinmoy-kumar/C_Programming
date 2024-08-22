// problem: Make a function which calculates ‘a’ raised to the power ‘b’ using recursion.

#include <stdio.h>
int power(int x, int y){
    if (y == 0)
        return 1;
    int recAns = x * power(x, y-1);
    return recAns;


}

int main(){
    int a, b;
    printf("Enter base number: ");
    scanf("%d", &a);
    printf("Enter power number: ");
    scanf("%d", &b);

    int powerAns = power(a, b);

    printf("%d raised to the power %d is: %d\n",a, b, powerAns);


    return 0;
}
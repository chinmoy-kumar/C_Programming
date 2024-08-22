//problem: Make a function which calculates ‘a’ raised to the power ‘b’ using recursion. (optimized by logarithmic)


#include <stdio.h>
int powerlog(int a, int b){
    if(b == 0) return 1;

    int x = powerlog(a, b/2);
    if (b%2 == 0)
    {
        return x * x;
    }
    else{
        return x * x * a;
    }
}

int main(){
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);

    int p = powerlog(a, b);

    printf("%d is raised to the power %d is: %d\n", a, b, p);

    return 0;
}
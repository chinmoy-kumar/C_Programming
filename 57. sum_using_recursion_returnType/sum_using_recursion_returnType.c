// problem: Print sum from 1 to n using recursion. (return type)

#include <stdio.h>
int sumFunc(int x){
    if(x == 1 || x == 0){
        return x;
    }
    int sum = x + sumFunc(x-1);
    return sum;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = sumFunc(n);

    printf("The sum is: %d\n", sum);

    return 0;
}
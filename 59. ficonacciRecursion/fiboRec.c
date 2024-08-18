// problem: Write a function to calculate the nth fibonacci number using recursion.

#include <stdio.h>
int fibo(int x){
    if (x == 1 || x == 2)
    {
        return 1;
    }
    
    int ans1 = fibo(x-1);
    int ans2 = fibo(x-2);
    int finalAns = ans1 + ans2;
    return finalAns;
}


/* Short Form 
---------------
int fibo(int x){
    if (x <= 2) return 1;
    return fibo(x-1) + fibo(x-2);
}
*/

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int fiboAns = fibo(n);
    printf("The answer is: %d\n", fiboAns);

    return 0;
}
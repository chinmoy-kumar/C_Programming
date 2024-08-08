//problem: Write a function to compute the greatest common divisor of two given numbers.
// HCF = Highest Common Factor

#include <stdio.h>

int min(int a, int b){
    if(a>b) return b;
    else return a;
}

int gcd(int x, int y){
    int hcf;
    for (int i = min(x,y); i >= 1; i--)
    {
        if(x%i==0 && y%i==0){
            hcf = i;
            break;
        }
        
    }
    return hcf;
}

int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);

    int hcf;
    hcf = gcd(a,b);
    printf("The HCF of %d and %d is: %d\n", a, b, hcf);

    return 0;
}
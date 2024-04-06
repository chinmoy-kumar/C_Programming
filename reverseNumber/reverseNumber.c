//Problem: WAP to print reverse of a given number.

#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    int sum, lastDigit;
    sum = 0;
    lastDigit = 0;
    while(num>0){
        lastDigit = num % 10;
        sum = (sum*10)+lastDigit;
        num = num / 10;
    }
    printf("The reverse of that number is: %d", sum);

    return 0;
}

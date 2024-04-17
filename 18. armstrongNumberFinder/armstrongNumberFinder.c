//problem: Take the input initial number and last number. Write a program to print out all Armstrong numbers between that range.

#include<stdio.h>
int main(){
    int initialNum, lastNum, i, num, r, sum;
    printf("Enter the inital value: ");
    scanf("%d", &initialNum);

    printf("Enter the Last value: ");
    scanf("%d", &lastNum);

    for (i = initialNum; i < lastNum; i++)
    {
        num = i;
        while (num != 0)
        {
            r = num % 10;
            sum = sum + r*r*r;
            num = num / 10;
        }

        if (sum == i)
        {
            printf("%d is a armstrong number\n", sum);
        }
        
        sum = 0;
        
        
    }
    

    return 0;
}
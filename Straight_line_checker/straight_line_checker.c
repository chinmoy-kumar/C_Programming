//Problem: Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.

#include <stdio.h>
int main(){
    double x1,x2,x3,y1,y2,y3;
    printf("Enter the value of x1, y1: ");
    scanf("%lf %lf",&x1,&y1);
    printf("Enter the value of x2, y2: ");
    scanf("%lf %lf",&x2,&y2);
    printf("Enter the value of x3, y3: ");
    scanf("%lf %lf",&x3,&y3);
    double m1,m2;
    m1 = (y2 - y1)/(x2 - x1);
    m2 = (y3 - y2)/(x3 - x2);

    if(m1 == m2){
        printf("Straight Line");
    }
    else{
        printf("Not a Straight Line");
    }

    return 0;
}
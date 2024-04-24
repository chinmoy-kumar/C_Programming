//problem: print the given pattern
//   *
//   *
// *****
//   *
//   *

#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n); // It's better to input a odd number to get a good format pattern.

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            int a = n/2 + 1;
            if(i == a || j == a)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }


    return 0;
}

// problem: print the given pattern
// 123
// 12
// 1

#include <stdio.h>
int main(){
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    

    return 0;
}
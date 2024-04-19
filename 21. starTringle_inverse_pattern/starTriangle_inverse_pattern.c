// problem: print the given pattern
// *****
// ****
// ***
// **
// *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

// solution- 02
//-----------------

// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter number of rows: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n+1-i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
        
//     }
    

//     return 0;
// }
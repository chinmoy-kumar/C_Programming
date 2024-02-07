// Q: Take positive interger input an tell if it is divisible by 5 or 3 but not divisible by 15.

#include <Stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if((a % 5 == 0 || a % 3 == 0) && a % 15 != 0){  //NOTE: Here bracket is very important before &&. Without brackets, the &&(and) condition will check before ||(or) condition, which will give the wrong output. Check with input 15 for know the difference between right and wrong.
        printf("Yes, it is");
    }
    else{
        printf("No, it is not");
    }

    return 0;
}
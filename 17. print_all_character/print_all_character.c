//problem: WAP a program to print all the ASCII values and the equivalent characters of 26 alphabets using a while loop.

#include <stdio.h>
int main()
{
    int start_value = 65; // A = 65 and a = 97
    int last_value = 90;
    
    while (start_value <= last_value)
    {
        printf("%d => ", start_value);
        char ch = (char)start_value;
        printf("%c\n", ch);
        start_value++;
    }
    

    return 0;
}
// problem: Take input and store in an array the marks of students, if the mark of any student is less than 35 print its roll number. [roll number here refers to the index of the array]

#include <stdio.h>
int main()
{
    int student[5];
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter student number: ");
        scanf("%d", &student[i]);
    }

    for (int j = 1; j <= 5; j++)
    {
        if (student[j] < 35)
        {
            printf("%d ", j);
        }
    }

    return 0;
}
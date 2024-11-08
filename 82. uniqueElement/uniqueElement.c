//problem:  Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[9] = {1, 2, 3, 4, 5, 1, 2, 5, 4};
    for (int i = 0; i < 9; i++)
    {
        bool flag = false;
        for (int j = i+1; j < 9; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;

            }
        }
        if (flag == false){
            printf("%d is the unique element.\n", arr[i]);
            break;
        }
        
    }
    

    return 0;
}
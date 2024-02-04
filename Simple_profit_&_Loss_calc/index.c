#include <stdio.h>

int main(){
    int cp, sp, profit, loss;
    printf("Enter the cost price: ");
    scanf("%d", &cp);
    printf("Enter the sell price: ");
    scanf("%d", &sp);

    if(cp<sp){
        printf("Seller has made profit.\n");
        profit = sp - cp;
        printf("Profit: %d", profit);
        
    }
    else if(cp==sp){
        printf("Seller has made neither profit or loss");
    }
    else{
        printf("Seller has made loss.\n");
        loss = cp - sp;
        printf("loss: %d", loss);
    }


    return 0;
}
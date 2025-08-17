// Q. If cost price and selling price of an item is input through the keyword, 
// Write a program to determine whether the seller has made profit or loss.
// Also determine how much profit or loss he incurred.

#include<stdio.h>

int main(){
    int sp, cp;
    printf("Enter Selling Price : ");
    scanf("%d",&sp);
    printf("Enter Cost Price : ");
    scanf("%d",&cp);

    if(sp > cp){
        printf("You Made Profit of : %d",(sp-cp));
    }
    if(sp == cp){
        printf("You have neither Profit nor loss");
    }
    else{
        printf("You Made loss of : %d",(cp-sp));
    }
}




//CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY, PRICE AND AMOUNT.  
//IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY ANDPRICE AS INPUT AND 
//CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.

#include<stdio.h>
struct Item{
    char name[20];
    int quantity;
    float price;
    float amount;
};

void fun(struct Item item){
    item.amount=item.quantity*item.price;
    printf("Name of item      : %s",item.name);
    printf("Quantity          : %d\n",item.quantity);
    printf("price             : %f\n",item.price);
    printf("Amount of item is : %.2f\n",item.amount);
    return;
}

int main(){
    struct Item item;

    printf("Enter item-name: ");
    fgets(item.name,20,stdin);
    printf("Enter quantity: ");
    scanf("%d",&item.quantity);
    printf("Enter price: ");
    scanf("%f",&item.price);
    
    fun(item);
    return 0;
}
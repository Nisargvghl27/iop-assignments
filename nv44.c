//program for an electric distribution company charges its domestic customers
#include<stdio.h>
int main(){
    int u;     //u=units
    double a;  //a=amount
    printf("Enter the number of units cousumed: ");
    scanf("%d",&u);
    if(u>=0 && u<=200){
        a=0.50*u;
    }
    else if(u>=201 && u<=400){
        a=100+0.65*(u-200);
    }
    else if(u>=401 && u<=600){
        a=230+0.80*(u-400);
    }
    else if(u>600){
        a=425+1.25*(u-600);
    }
    else{
        printf("Invalid number of units.\n");
        return 1;
    }
    printf("The amount to be paid is Rs %f %f.\n",a);
    return 0;
}
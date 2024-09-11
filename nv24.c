#include<stdio.h>
int main()
{
    float x,y,n;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of n: ");
    scanf("%f",&n);
    if(n==1){
        y=1+x;
        printf("value of y is %f",y);
    }
    else if(n==2){
        y=1+x/n;
        printf("value of y is %f",y);
    }
    else if(n==3){
        y=1+x*x*x;
        printf("value of y is %f",y);
    }
    else{
        y=1+n*x;
        printf("value of y is %f",y);
    }
    return 0;
}
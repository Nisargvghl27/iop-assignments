//exchange to interchange the value of two variables.
#include<stdio.h>
void exchange(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int x,y;
    printf("Enter value of x: ");
    scanf("%d",&x);
    printf("Enter value of y: ");
    scanf("%d",&y);
    exchange(&x,&y);
    printf("After exchanging: \n");
    printf("x=%d \ny=%d\n",x,y);
    return 0;
}
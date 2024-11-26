//You are given a number N, you need to print the number of positions where digits exactly divides N.
#include<stdio.h>
int main(){
    int n;
    printf("Enter number n: ");
    scanf("%d",&n);
    int on=n;
    int count=0;
    int r;
    while(n!=0){
        r=n%10;
        n/=10;
        if(r==0){
            printf("Any number can not be divided by 0.\n");
        }
        else if(on%r==0){
            count++;
        }
    }
    printf("Number of digits : %d.",count);
    return 0;
}
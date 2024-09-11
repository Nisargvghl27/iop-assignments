//print sum of individiul digits of a 'N' digit numbers
#include<stdio.h>
int main(){
    int n,s=0,d;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0){
        n=-n;
    }
    while(n!=0){
        d=n%10;
        s+=d;
        n/=10;
    }
    printf("Sum of the digits is %d.\n",s);
    return 0;
}
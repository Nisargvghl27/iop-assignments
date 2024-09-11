//read a number n and print a single digit answer showing sum of digit of number
#include<stdio.h>
int sd(int n)            //sd=sum of digits
{
    int s=0;
    while(n>0){
        s+=n%10;
        n/=10;
    }
    return s;
}
int rd(int n)             //reduce to single digit
{
    while(n>=10){
        n=sd(n);
    }
    return n;
}
int main(){
    int n,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0){
        n=-n;
    }
    s=sd(n);
    s=rd(s);
    printf("The single digit sum of the digit is %d\n",s);
    return 0;
}
//program to reverse of a given number.
#include<stdio.h>
int rn(int n){
    int rn=0;        //rn=reverse number
    int re;          //re=reminder
    while(n!=0){
        re=n%10;
        rn=rn*10+re;
        n/=10;
    }
    return rn;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int rev=rn(num);
    printf("Reversed number is %d",rev);
    return 0;
}